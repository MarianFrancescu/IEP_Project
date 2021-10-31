#include <iostream>
#include "Car.h"
#include <string>
#include <vector>
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
    int i = 0;
    vector<Car> cars;
    Car car1{"tesla", "s",1999,"black",1000};
    //use of copy constructor
    Car car2(car1);
    cout << car2;

    do{
        cout << "0. Exit\n";
        cout << "1. View all cars\n";
        cout << "2. Search for a brand\n";
        cout << "3. Search car after color\n";
        cout << "4. Add a car\n";

        cin >> option;

        switch(option){
            case 0:
                cout << "Exiting...\n";
                return 0;
            case 1:
                cout << "View cars\n";
                for(Car car : cars)
                {
                    cout << car;
                }
                break;
            case 2: {
                string name;
                cout << "Brand: ";
                cin >> name;
                for(Car car : cars)
                {
                    if(car.getName() == name)
                        cout << car;
                }
                break;
                }
            case 3: 
                {string color;
                cout << "Car's color: ";
                cin >> color;
                break;}
            case 4: 
                {string brand, model, color;
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
                break;}
        }

    }while(option != 0);
    return 0;
}