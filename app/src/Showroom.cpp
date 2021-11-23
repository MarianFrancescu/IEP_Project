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

    void Showroom::addCar(Car& car)
    {
        cars.push_back(car);
    }

ostream& operator<<(ostream& ostr, const Showroom& showroom) {
    ostr << "Showroom name: " << "\033[1;35m" << showroom.getName() << "\033[0;37m" << " & location: " 
        << "\033[1;36m" << showroom.getLocation() << "\033[0;37m" <<endl;
    cout << "- Cars:\n";
    for(Car car: showroom.getCars())
        cout << " > "<<car;
    return ostr;
}