#include <iostream>
using namespace std;

int main() {
    int* pa , *pb ,*psum;
    pa=new int ;
    pb = new int ;
    psum = new int ;

    cout << "Enter Two numbers:" <<endl;
    cin>>*pa>>*pb;
    *psum = *pa + *pb ;
    cout<<"The sum is :"<<*psum;
    delete pa;
    delete pb;
    delete psum;
    return 0;
}