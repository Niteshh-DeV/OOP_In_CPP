#include <iostream>
#include <math.h>
using namespace std;

class complex
{
    float i,r ;
    public:
        void getdata()
        {
            cout<<"Enter real part of complex number: ";
            cin>>r;
            cout<<"Enter imaginary part of complex number: ";
            cin>>i;

        }
        void magnitude() const ;

};

 void complex :: magnitude() const{
    float mag = sqrt(pow(r,2)+pow(i,2));
    cout<<"Magnitude of complex number is: "<<mag;
 } 
int main() {
    cout << "This is an example of const member function and  const object." << endl;

    complex c1;
    c1.getdata();
    c1.magnitude();

    return 0;
}