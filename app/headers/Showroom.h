#ifndef SHOWROOMDB_SHOWROOM_H
#define SHOWROOMDB_SHOWROOM_H

#include <string>
#include <iostream>
#include <vector>
#include "Car.h"
#include "Lock.h"

using namespace std;

class Showroom{
    private:
        string name;
        string location;
        vector<Car> cars; 
        int counter;   
        Lock lock;    

    public:
        //default constructor
        Showroom();

        //used constructor
        Showroom(string showroomName, string showroomLocation, vector<Car> showroomCars);

        //copy constructor
        Showroom(const Showroom &showroom);

        //copy assignment operator
        Showroom& operator=(const Showroom& showroom);

        //destructor
        ~Showroom();

        //geters
        string getName() const;
        string getLocation() const;
        vector<Car> getCars() const;
        void addCar(Car& car); 
        void deleteCar();
        int totalOfCars();       
};

ostream& operator<<(ostream& ostr, const Showroom& Showroom);

#endif