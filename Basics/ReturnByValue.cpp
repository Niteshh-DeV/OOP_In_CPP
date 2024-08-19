#include <iostream>
using namespace std;
int sum(int a ,int b)
{
    return (a+b);
}
int main() {
    int p,q;
    cout << "Enter two integers: " <<endl;
    cin>>p>>q;
    int d = sum(p,q);
    cout<<"The sum is : "<<d;
    return 0;
}