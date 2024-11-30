#include <iostream>
using namespace std;

class vehicle
{
    public : vehicle()
            {
                cout << "\n Consructor of vechicle ";
            }
            virtual void showdata()
            {
                cout<< "\n I am Vehicle";
            }
            ~vehicle()
            {
                cout << "\n Destructor of vehicle.";
            }
};

class car : public vehicle
{
    public : car()
            {
                cout << "\n Constructor of Car.";
            }
            void showdata()
            {
                cout<< "\n I am Car.";
            }
            ~car()
            {
                cout << "\n Destructor of Car.";
            }
    
};

int main() {
    cout << "Virtual Destructors in C++ !!" <<endl;

    vehicle *vp;
    vp = new vehicle;
    vp ->showdata();
    delete vp ;

    vp = new car ;
    vp ->showdata();
    delete vp;
    return 0;
}