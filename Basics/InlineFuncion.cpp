#include <iostream>
using namespace std;
inline int add(int a,int b)
{
    return (a+b);
}
int main() {
    int p,q ;
    cout << "Enter Two Numbers : " <<endl;
    cin>>p>>q ;
    cout<<"The Sum is "<<add(p,q);
    return 0;
}