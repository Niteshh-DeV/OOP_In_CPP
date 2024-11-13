#include <iostream>
using namespace std;

class A
{
    int x ,y ;
    void show()
    {
        cout<<x<<y<<endl ;
    }
    public:
            int z;
            void sum()
            {
                z=x+y;
                cout<<z<<endl;
            }
};

class B : public A
{
    int a ,b ;
    public : void enter()
    {
        cin>>a>>b ;
    }
    void display()
    {
        cout<<a<<b<<endl ;
    }
};

int main() {
    cout << "This is an example of single or simple inheritance !!" <<endl;

    A m ;
    B n ;
    n.z =20;
    n.sum();
    n.enter();
    n.display();

    // n.x =5 Not inheritated 
    // n.show()  Not inheritated 

    return 0;
}
