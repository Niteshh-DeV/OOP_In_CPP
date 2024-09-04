#include <iostream>
using namespace std;

class Destuctor
{
    static  int count;
    int id;
    float price;

    public:
            Destuctor(float p)
            {
                price =p;
                count ++;
                id =count;

                cout<<"Object with id  "<<id<<" created"<<endl;

            }

            ~Destuctor()
            {
                cout<<"Object with id "<<id<<" destroyed"<<endl;
            }

};

 int Destuctor::count = 0;


int main() {
    cout << "This  is a program to demonstrate the use of destructor in C++." << endl;

    Destuctor Obj1(50.50),obj2(70),obj3(40.5);
    {
        Destuctor obj4(60.5);
    } 


    return 0;
}