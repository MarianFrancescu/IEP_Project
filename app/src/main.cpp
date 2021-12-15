#include <iostream>
#include "../headers/Car.h"
#include "../headers/Showroom.h"
#include "../headers/Manager.h"
#include "../headers/Lock.h"
#include <string>
#include <vector>
#include <memory>
#include <thread>
using namespace std;

int main()
{
    int option;
    Car emblematicCar{"Honda", "Civic", 2020, "black", 100000};
    Car emblematicCar1{"Honda", "Accord", 2004, "green", 1000};
    Car emblematicCar2{"Mercedes", "W126", 1986, "black", 15000};

    Showroom showroom1{"Autobenz", "Stuttgart", {}};
    Showroom showroom11{"VW Group", "Wolfsburg", {}};

    //example use for faster demo
    showroom1.addCar(emblematicCar);
    showroom1.addCar(emblematicCar1);

    //shared pointer - same car is shared between 2 showrooms
    Showroom exampleShowroom{"Benetton", "UK", {}};
    shared_ptr<Car> car1(new Car("Mercedes", "C", 2004, "green", 10500));
    exampleShowroom.addCar(*car1);

    Showroom exampleShowroom2{"Daimler", "Linz", {}};
    shared_ptr<Car> car2 = car1;
    
    exampleShowroom2.addCar(*car2);

    cout<<"Number of owners of shared car: "<< car2.use_count()<<endl;

    Showroom showroom2{"Bavaria Group", "Munich", {}};
    
    showroom2.addCar(emblematicCar2);
    
    //use of unique pointer - we can move the manager, but not copy 
    unique_ptr<Manager> M1(new Manager("Lewis"));
    M1->setShowroom(showroom1);
    cout<<*M1;

    unique_ptr<Manager> M2(new Manager("Phill"));
    M2->setShowroom(showroom1);
    cout<<*M2;

    // //legal operation to move M2 in M3 -> M2 will be destroyed
    // unique_ptr<Manager> M3 = std::move(M2);
    // cout<<*M3;
    // //this will broke the program because M2 is destroyed
    // cout<<*M2;

    // illegal operation
    // unique_ptr<Manager> M3 = M1;
    // cout<<*M3;
    
    std::thread contor1(&Showroom::addCar, &showroom11, std::ref(emblematicCar1));
    std::thread contor2(&Showroom::addCar, &showroom11, std::ref(emblematicCar2));

    contor1.join();
    contor2.join();
    // showroom11.addCar(emblematicCar);
    cout<<"\tNo of cars in the "<<
        showroom11.getName()<<" showroom is: "<<showroom11.totalOfCars()<<endl;
    return 0;
}