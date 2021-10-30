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
        Car(string carName, string carModel, int carFabricationYear, string carColor, int carPrice);

        //geters
        string getName() const;
        string getModel() const;
        string getColor() const;
        int getFabricationYear() const;
        int getPrice() const;

};

ostream& operator<<(ostream& ostr, const Car& car);

#endif