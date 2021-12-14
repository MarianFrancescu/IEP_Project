#include "headers/Manager.h"
#include "memory"

using namespace std;

//default constructor
Manager::Manager()
        :   name(""),
            showroom({}){}

//used constructor
Manager::Manager(string managerName)
        :   name(managerName){}

//copy constructor
Manager::Manager(const Manager &manager)
        :   name(manager.name){}

Manager::~Manager(){}
    
//seters
    void Manager::setShowroom(Showroom managerShowroom) {
        this->showroom = managerShowroom;
    }

//getters
    string Manager::getName() const{
        return name;
    }

    string Manager::getShowroomName() const{
        return showroom.getName();
    }

    Showroom Manager::getShowroom() const{
        return showroom;
    }

ostream& operator<<(ostream& ostr, const Manager& manager) {
    ostr << "Manager: " << manager.getName() << " on the showroom: " << manager.getShowroomName() << endl;
    return ostr;
}