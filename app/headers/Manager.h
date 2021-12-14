#ifndef MANAGERDB_MANAGER_H
#define MANAGERDB_MANAGER_H

#include <string>
#include <iostream>
#include "Showroom.h"
#include "memory"

using namespace std;

class Manager{
    private:
        string name;
        Showroom showroom;

    public:
        //default constructor
        Manager();

        //used constructor
        Manager(string managerName);

        //copy constructor
        Manager(const Manager &manager);

        //destructor
        ~Manager();

        //seters
        void setShowroom(Showroom managerShowroom);

        //getters
        string getName() const;
        string getShowroomName() const;
        Showroom getShowroom() const;
};

ostream& operator<<(ostream& ostr, const Manager& manager);

#endif