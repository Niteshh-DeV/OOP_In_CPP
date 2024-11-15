#include <iostream>
using namespace std;

// Base class 1
class Vehicle {
public:
    void displayVehicle() {
        cout << "This is a vehicle." << endl;
    }
};

// Base class 2
class Engine {
public:
    void displayEngine() {
        cout << "This vehicle has an engine." << endl;
    }
};

// Derived class 1 (Inheriting from Vehicle)
class Car : public Vehicle {
public:
    void displayCar() {
        cout << "This is a car." << endl;
    }
};

// Derived class 2 (Inheriting from both Vehicle and Engine)
class HybridCar : public Car, public Engine {
public:
    void displayHybridCar() {
        cout << "This is a hybrid car." << endl;
    }
};


int main() {
    cout << "An example of hybrid inheritance !!" <<endl;

     HybridCar myCar;
    
    // Accessing methods from all base classes
    myCar.displayVehicle();    // From Vehicle class
    myCar.displayEngine();     // From Engine class
    myCar.displayCar();        // From Car class
    myCar.displayHybridCar();  // From HybridCar class
    return 0;
}