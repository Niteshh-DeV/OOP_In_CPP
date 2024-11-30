#include <iostream>
using namespace std;

class Animal
{
    public: virtual void display()
            {
                cout<<"\n Base class animal.";
            }
};

class cow : public Animal
{
    public:
            void display()
            {
                cout << " \n  From class Cow.";
            }
};

class dog :public Animal
{
    public :
            void dispaly()
            {
                cout<<"\n From Class Dog.";
            }
};

int main() {
    cout << "An example of Virtual Function !!" <<endl;

    Animal *aptr;
    Animal A ;
    cow c;
    dog d;

    aptr = &A ;
    aptr -> display();

    aptr = &c ;
    aptr -> display();

    aptr = &d;
    aptr -> display();
    return 0;
}