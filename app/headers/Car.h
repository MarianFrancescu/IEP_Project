#ifndef CARDB_CAR_H
#define CARDB_CAR_H

#include <string>
#include <iostream>

using namespace std;

class Car{
    private:
        string name;
        string model;
        int fabricationYear;
        string color;
        int price;

    public:
        //default constructor
        Car();

        //used constructor
        Car(string carName, string carModel, int carFabricationYear, string carColor, int carPrice);

        //copy constructor
        Car(const Car &car);

        //destructor
        ~Car();

        //geters
        string getName() const;
        string getModel() const;
        string getColor() const;
        int getFabricationYear() const;
        int getPrice() const;

        //copy assignment operator
        Car& operator=(const Car& car);

};

ostream& operator<<(ostream& ostr, const Car& car);

#endif