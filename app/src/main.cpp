#include <iostream>
#include "Car.h"
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
    Car car1("tesla", "s",1999,"black",1000);
    cout<<car1;
    return 0;
}