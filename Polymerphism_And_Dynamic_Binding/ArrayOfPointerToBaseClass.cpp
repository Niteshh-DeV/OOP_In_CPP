#include <iostream>
using namespace std;

class Animal
{
    public: virtual void display()
            {
                cout<<"\nClass animal.";
            }
};

class cow : public Animal
{
    public:
            void display()
            {
                cout << " \nClass Cow.";
            }
};

class dog :public Animal
{
    public :
            void display()
            {
                cout<<"\nClass Dog.";
            }
};

int main() {
    cout << "An example of array of pointers to base class !!" <<endl;

    Animal A ;
    cow c;
    dog d;

   Animal *aptr[] = {&A,&c,&d};
   for (int i = 0 ; i<3 ; i++)
   {
    aptr [i] -> display();
   }
    return 0;
}