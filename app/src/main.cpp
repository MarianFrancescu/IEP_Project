#include <iostream>
#include "Car.h"
#include <string>
// #include <string>
using namespace std;

// class Car{
//     private:
//         string name;
//         string model;
//         int fabricationYear;
//         string color;
//         int price;

//     public:
//         Car(string carName, string carModel, int carFabricationYear, string carColor, int carPrice){
//             name = carName;
//             model = carModel;
//             fabricationYear = carFabricationYear;
//             color = carColor;
//             price = carPrice;
//         }

//         //geters
//         string getName() const{
//             return name;
//         }
//         string getModel() const{
//             return model;
//         }
//         string getColor() const{
//             return color;
//         }
//         int getFabricationYear() const{
//             return fabricationYear;
//         }
//         int getPrice() const{
//             return price;
//         }

// };

// ostream& operator<<(ostream& ostr, const Car& car) {
//         ostr << car.getName() << " model: " << car.getModel()<<endl;
//         return ostr;
//     }

int main() {
    int option;
    Car car1("tesla", "s",1999,"black",1000);
    cout << car1;

    do{
        cout << "0. Exit\n";
        cout << "1. View all cars\n";
        cout << "2. Search for a brand\n";
        cout << "3. Search car after color\n";

        cin >> option;

        switch(option){
            case 0:
                cout << "Exiting...\n";
                return 0;
            case 1:
                cout << "View cars\n";
                break;
            case 2: {
                string name;
                cout << "Brand: ";
                cin >> name;
                break;
                }
            case 3: 
                string color;
                cout << "Car's color: ";
                cin >> color;
                break;
        }

    }while(option != 0);
    return 0;
}