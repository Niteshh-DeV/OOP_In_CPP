#include <iostream>
using namespace std;

class base
{
    protected: int mark1 , mark2 ;

    public:
            base(int a ,int b)
            {
                mark1 = a ;
                mark2 = b ;
            }
};

class derived : public base
{
    int total ;
    public : derived() : base(0 ,0)
    {
        total = 0;
    }
    void calculate()
    {
        cout<<" \n Total marks = "<<mark1+mark2 ;
    }
};

int main() {
    cout << "An example of constructor invocation in single inheritance when base class has parameterized constructor !!" <<endl;

    derived d1;
    d1.calculate();


    return 0;
}