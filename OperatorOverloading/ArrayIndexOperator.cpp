#include <iostream>
using namespace std;
class Array
{
    int a[10];
    public:
        Array(int b[],int s)
        {
            for(int i=0;i<s;i++)
            {
                a[i]=b[i];
            }
        }

        int& operator [](int index)
        {
            if(index<0 || index >10)
            {
                cout<<"Data Does not exist"<<endl;
                exit(1);
            }
            return a[index];
        }
};

int main() {
    cout << "This is  a simple example of array index [] operator overloading in C++" << endl;
    int b[]={1,2,3,4,5,6,7,8,9,10};
    Array A(b,10);

    cout<<"Third Element ="<<A[2]<<endl;

    A[2] =  100;

    cout<<"Third Element ="<<A[2]<<endl;    
    return 0;
}