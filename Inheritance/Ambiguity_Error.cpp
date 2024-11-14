#include <iostream>
using namespace std;

class One
{
    public: void display()
            {
                cout<<"\n Class One";
            }
};

class Two
{
    public:
            void display()
            {
                cout<<"\n Class Two" ;
            }
};

class Derived : public One , public Two
{

};

int main() {
    cout << "A basic example of ambiguity error in Multiple inheritance " <<endl;

    Derived D;
    // D.dispaly();  Ambiguity Error

    D.One :: display();

    D.Two :: display();
    return 0;
}