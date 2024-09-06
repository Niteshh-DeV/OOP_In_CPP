#include <iostream>
using namespace std;

class complex
{
    float x, y ;
    public:
            complex ()
            {
                x=0.0;
                y=0.0;
            }
            complex (float a, float b)
            {
                x=a ;
                y=b ;
            }
            complex  operator + (complex);
            void display();
            complex operator - (complex);
};

complex complex :: operator +(complex c)
{
    complex temp ;
    temp.x = x + c.x ;
    temp.y = y + c.y ;
    return temp ;
}

complex complex ::  operator - (complex d)
{
    complex temp ;
    temp.x = x - d.x ;
    temp.y = y- d.y;
    return temp ;
}
void complex :: display()
{
    cout<<x<<" +j"<<y <<endl;
}


int main() {
    cout << "This is example of Binary  Operator Overloading in C++" << endl;

    complex  c1(3.5, 4.3);
    complex  c2(5.3, 6.7);
    complex c3;
    complex c4;
    c3 = c1 + c2;
    cout << "Complex number c1: ";
    c1.display();
    cout << "Complex number c2: ";
    c2.display();
    cout << "Sum of Complex number is: ";
    c3.display();

    cout<<"Difference of  Complex number is: ";
    c4 = c1 - c2;
    c4.display();

    return 0;
}