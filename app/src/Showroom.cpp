#include "Showroom.h"

using namespace std;

//default constructor
Showroom::Showroom()
        :   name(""),
            location(""),
            cars({}){}

//used constructor
Showroom::Showroom(string showroomName, string showroomLocation, vector<Car> showroomCars)
        :   name(showroomName),
            location(showroomLocation),
            cars(showroomCars){}

//copy constructor
Showroom::Showroom(const Showroom &showroom)
        :   name(showroom.name),
            location(showroom.location),
            cars(showroom.cars){}

//copy assignment operator
Showroom& Showroom::operator=(const Showroom& showroom){
    if(this == &showroom) return *this;

    name = showroom.name;
    location = showroom.location;
    cars = showroom.cars;

    return *this;
}

//destructor
Showroom::~Showroom(){
    cout<<"Destroyed showroom\n";
}

    string Showroom::getName() const{
        return name;
    }

    string Showroom::getLocation() const{
        return location;
    }

    vector<Car> Showroom::getCars() const{
        return cars;
    }

ostream& operator<<(ostream& ostr, const Showroom& showroom) {
    ostr << "Showroom name: " << showroom.getName() << " & location: " << showroom.getLocation()<<endl;
    cout << "Cars:\n";
    for(Car car: showroom.getCars())
        cout << car;
    return ostr;
}