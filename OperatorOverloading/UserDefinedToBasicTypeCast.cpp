#include <iostream>
using namespace std;

class celcius
{
    float tempr;

    public:
        celcius():tempr(0)
        {}
    operator float()
    {
        float fer;
        fer = (tempr * 9/5) + 32;
        return fer;

    }
    void gettempr()
    {
        cout<<"Enter  the temperature in celcius: ";
        cin>>tempr;
    }
};

int main() {
    cout << "User defined to Basic Data Type conversion!!!" <<endl;
    celcius c1;
    float k;
    c1.gettempr();
    k = c1;
    cout << "Temperature in Fahrenheit: " << k << endl;
    return 0;
}