#include <iostream>
#include "../headers/Car.h"
#include "../headers/Showroom.h"
#include "../headers/Manager.h"
#include <string>
#include <vector>
#include <memory>
using namespace std;

int main()
{
    int option;
    Car emblematicCar{"Honda", "Civic", 2020, "black", 100000};
    Car emblematicCar1{"Honda", "Accord", 2004, "green", 1000};

    Showroom showroom1{"Autobenz", "Stuttgart", {}};

    //example use for faster demo
    showroom1.addCar(emblematicCar);
    showroom1.addCar(emblematicCar1);

    Showroom copyShowroom1 = showroom1;

    cout<<"Number of cars: "<< showroom1.totalOfCars()<<endl;

    //shared pointer - same car is shared between 2 showrooms
    Showroom exampleShowroom{"Benetton", "UK", {}};
    shared_ptr<Car> car1(new Car("Mercedes", "C", 2004, "green", 10500));
    exampleShowroom.addCar(*car1);

    Showroom exampleShowroom2{"Daimler", "Linz", {}};
    shared_ptr<Car> car2 = car1;
    exampleShowroom2.addCar(*car2);

    cout<<"Number of shared cars: "<< exampleShowroom2.totalOfCars()<<endl;


    Showroom showroom2{"Bavaria Group", "Munich", {}};

    //use of unique pointer - we can move the manager, but not copy 
    unique_ptr<Manager> M1(new Manager("Lewis"));
    cout<<*M1;

    unique_ptr<Manager> M2 = std::move(M1);
    M2->setShowroom(showroom2);

    unique_ptr<Manager> M3 = std::move(M2);
    M3->setShowroom(showroom1);
    cout<<*M3;
    // cout<<M1->getShowroomName()<<endl;


    // do
    // {
    //     cout << "0. Exit\n";
    //     cout << "1. View all cars from showroom\n";
    //     cout << "2. Search for a brand\n";
    //     cout << "3. Search car after color\n";
    //     cout << "4. Add a car\n";

    //     cin >> option;

    //     switch (option)
    //     {
    //     case 0:
    //         cout << "Exiting...\n";
    //         return 0;

    //     case 1:
    //     {
    //         cout << "View  all cars from the showroom\n";

    //         Showroom showroom3 = showroom2;
    //         cout<<showroom3;
    //         break;
    //     }

    //     case 2:
    //     {
    //         string name;
    //         cout << "Brand: ";
    //         cin >> name;
    //         for (Car car : showroom2.getCars())
    //         {
    //             if (car.getName() == name)
    //                 cout << car;
    //         }
    //         break;
    //     }

    //     case 3:
    //     {
    //         string color;
    //         cout << "Car's color: ";
    //         cin >> color;
    //         for (Car car : showroom2.getCars())
    //         {
    //             if (car.getColor() == color)
    //                 cout << car;
    //         }
    //         break;
    //     }

    //     case 4:
    //     {
    //         string brand, model, color;
    //         int fabrYear, price;
    //         cout << "Car's brand: ";
    //         cin >> brand;
    //         cout << "Car's model: ";
    //         cin >> model;
    //         cout << "Car's color: ";
    //         cin >> color;
    //         cout << "Car's fabrication year: ";
    //         cin >> fabrYear;
    //         cout << "Car's price: ";
    //         cin >> price;

    //         //add cars in the specified showroom
    //         Car exampleCar{brand,model,fabrYear,color,price};
    //         showroom2.addCar(exampleCar);
    //         break;
    //     }

    //     default:
    //         cout << "Option not available!\n";
    //     }

    // } while (option != 0);
    return 0;
}