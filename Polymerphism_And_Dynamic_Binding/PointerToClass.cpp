#include <iostream>
using namespace std;

class base
{
    public : int m ;
    void dispaly()
    {
        cout<<"\n From base Class , m = "<<m;
    }
};

class derived : public base 
{
    public: int n ;
     void dispaly()
    {
        cout<<"\n From derived Class , n = "<<n;
    }
   
};

int main() {
    cout << "Pointer to base and derived class " <<endl;

    base *bptr;
    derived *dptr;

    derived d1;

    bptr = &d1;
    dptr = &d1;

    bptr -> m =10;

    //bptr -> n= 20 ; //Illegel

    dptr ->dispaly();
    dptr -> base :: dispaly();
    return 0;
}