#include <iostream>
using namespace std;
int& max(int &,int &);
int main() {
    int a,b;
    cout << "Enter Values: " <<endl;
    cin>>a>>b;
    max(a,b)=50;
    cout<<"Values of a & b are = "<<a <<"\t"<<b ;
    return 0;
}
int& max(int &x , int &y)
{
    if(x>y)
        return x ;
    else
        return y ;
}