#include <iostream>

using namespace std;

class Car {
public:
    string mark;
    string model;
    int year;
    int milage;
    
    void addCar() {
        cout << "Mark: "; cin >> mark;
        cout << "Model: "; cin >> model;
        cout << "Year: "; cin >> year;
        cout << "Milage: "; cin >> milage;
    }
    
    void displayCarInfo() {
        cout << "Mark" << mark << endl;
        cout << "Model" << model << endl;
        cout << "Year" << year << endl;
        cout << "Milage" << milage << endl;
    }
};

int main() {
    Car car;
    car.addCar();
    car.displayCarInfo();
    
    return 0;
}
