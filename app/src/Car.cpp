#include "Car.h"

using namespace std;

Car::Car(string carName, string carModel, int carFabricationYear, string carColor, int carPrice){
        name = carName;
        model = carModel;
        fabricationYear = carFabricationYear;
        color = carColor;
        price = carPrice;
    }

//geters
    string Car::getName() const{
        return name;
    }
    string Car::getModel() const{
        return model;
    }
    string Car::getColor() const{
        return color;
    }
    int Car::getFabricationYear() const{
        return fabricationYear;
    }
    int Car::getPrice() const{
        return price;
    }

ostream& operator<<(ostream& ostr, const Car& car) {
    ostr << car.getName() << " model: " << car.getModel()<<endl;
    return ostr;
}