#include "Car.h"

using namespace std;

//default constructor
Car::Car()
        :   name(""),
            model(""),
            fabricationYear(0),
            color(""),
            price(0){}

//used constructor
Car::Car(string carName, string carModel, int carFabricationYear, string carColor, int carPrice)
        :   name(carName),
            model(carModel),
            fabricationYear(carFabricationYear),
            color(carColor),
            price(carPrice){}

//copy constructor
Car::Car(const Car &car)
        :   name(car.name),
            model(car.model),
            fabricationYear(car.fabricationYear),
            color(car.color),
            price(car.price){}
    
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