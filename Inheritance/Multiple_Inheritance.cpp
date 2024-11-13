#include <iostream>
using namespace std;

class one
{
    protected: int x ;
    public: void display1()
    {
        cout<<"X = "<<x<<endl;

    }
};
class two
{
    protected:
                int y;
    public:
                void display2()
                {
                    cout<<y<<endl;
                }
};

class derived : public one , public two
{
    int z ;
    public : void enter()
    {
        cout<<"Enter:";
        cin>>x>>y;

    }
    void display3()
    {
        z = x + y ;
        cout <<"\n Z = "<<z ;
    }
};
int main() {
    cout << "A basic example of Multiple inheritance" <<endl;

    derived obj ;
    obj.enter();
    obj.display1();
    obj.display2();
    obj.display3();

    return 0;
}