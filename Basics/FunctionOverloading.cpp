// Heres a simple examples of function overloading :

#include <iostream>
using namespace std;

float area(int , float);
float area( int );
float area(int , int);
float area(float , float);

int main() {
    int a,b ,c ,d;
    float p,q,r ;

    cout << "Enter radius of circle : " <<endl;
    cin>>a;
    cout<<"The area of circle is : "<<area(a);
    cout<<"Enter length and breadth of rectangle :"<<endl;
    cin>>b>>c;
    cout<<"The area of Rectangle is "<< area(b,c)<<endl;
    cout<<"Enter the radius and height of Cylinder: ";
    cin>>d>>p;
    cout<<"The area of Cylinder is "<<area(d,p)<<endl;
    cout<<"Enter the height and base of traingl:";
    cin>>q>>r;
    cout<<"The area of traingle is : "<<area(q,r);
    return 0;


}
float area(int A)
{
    return (3.14*A*A);
}
float area( int B, int C )
{
    return(B*C);
}
float area(int D, float P)
{
    return (2*3.14*D*P);
}
float area( float Q , float R)
{
    return (0.5*Q*R);
}