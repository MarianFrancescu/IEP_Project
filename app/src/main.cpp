#include <iostream>
#include "Car.h"
#include <string>
#include <vector>
using namespace std;

int main()
{
    int option;
    int i = 0;
    vector<Car> cars{};
    Car emblematicCar{"Honda", "Civic", 2020, "black", 100000};
    Car emblematicCar1{"Honda", "Accord", 2004, "green", 1000};

    // //use of copy constructor
    // Car emblematicCar2(emblematicCar1);
    // cout << emblematicCar2;

    // //use of copy assignment operator
    // emblematicCar2.operator=(emblematicCar);
    // cout<<emblematicCar2;

    do
    {
        cout << "0. Exit\n";
        cout << "1. View all cars\n";
        cout << "2. Search for a brand\n";
        cout << "3. Search car after color\n";
        cout << "4. Add a car\n";

        cin >> option;

        switch (option)
        {
        case 0:
            cout << "Exiting...\n";
            return 0;
        case 1:
            cout << "View cars\n";
            //initialized a reference from temporary
            for (Car car : cars)
            {
                cout << car;
            }
            break;
        case 2:
        {
            string name;
            cout << "Brand: ";
            cin >> name;
            for (Car car : cars)
            {
                if (car.getName() == name)
                    cout << car;
            }
            break;
        }
        case 3:
        {
            string color;
            cout << "Car's color: ";
            cin >> color;
            for (Car car : cars)
            {
                if (car.getColor() == color)
                    cout << car;
            }
            break;
        }
        case 4:
        {
            string brand, model, color;
            int fabrYear, price;
            cout << "Car's brand: ";
            cin >> brand;
            cout << "Car's model: ";
            cin >> model;
            cout << "Car's color: ";
            cin >> color;
            cout << "Car's fabrication year: ";
            cin >> fabrYear;
            cout << "Car's price: ";
            cin >> price;
            cars.push_back(Car(brand, model, fabrYear, color, price));
            break;
        }

        default:
            cout << "Option not available!\n";
        }

    } while (option != 0);
    return 0;
}