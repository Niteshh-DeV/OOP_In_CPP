#include <iostream>
using namespace std;

class base1{
   protected: int A ;
    public: base1(int a)
    {
        cout<<"\n The first value is  "<<a;
        A = a;
    }
   
};

class base2{
    protected : int B ;
    public:base2(int b)
    {
        cout<<"\n The second value is "<<b;
        B = b;
    }
};

class derived: public base1 , public base2 
{
    public : derived():base1(3), base2(5)
    {
       cout<<"\n The sum is "<<A+B;
    }
};

int main() {
    cout << "Constructor Invocation in multiple inheritance when base class have Parameterized constructor" <<endl;

    {
        derived d ;
    }
    return 0;
}