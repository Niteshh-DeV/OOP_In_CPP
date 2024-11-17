#include <iostream>
using namespace std;

class base
{
    public: base()
    {
        cout<<"\n Base Class constructor.";
    }
    ~base()
    {
        cout<<"\n Base class destructor.";
    }
};

class derived : public base 
{
    public :derived()
        {
            cout<<" \n Derived class constructor";
        }
        ~derived()
        {
            cout<<"\n Derived class destructor";
        }
    
};

int main() {
    cout << "An example of constructor invocation in single inheritance when base class has defult constructor !!" <<endl;
    {
    derived d1;
    }
    return 0;
}