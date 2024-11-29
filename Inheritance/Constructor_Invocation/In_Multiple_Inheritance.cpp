#include <iostream>
using namespace std;

class base1{
    public: base1()
    {
        cout<<"\n Base 1 construsted !";
    }
    ~base1()
    {
        cout<<"\n Base 1 destructed !";
    }
};

class base2{
    public:base2()
    {
        cout<<"\n base 2 constructed !";
    }
    ~base2()
    {
        cout<<"\n Base 2 Destructed !";
    }
};

class derived: public base1 , public base2 
{
    public : derived()
    {
        cout<<"\n Derived Class Constructed !";
    }
    ~derived()
    {
        cout<<"\n Derived class destructed !";
    }
};

int main() {
    cout << "Constructor Invocation in multiple inheritance when base class have defult constructor" <<endl;

    {
        derived d ;
    }
    return 0;
}