#include <iostream>
using namespace std;

template<class t>
t abs(t n)
{
    if (n < 0)
        return (-n);
    else
        return (n);
}

int main() {
    int a = -4 ;
    float b =9.3 ;
     cout<<"Absolute value of a = "<<abs(a);
     cout<<"\nAbsolute value of b = "<<abs(b);
    return 0;
}