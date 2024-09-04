#include <iostream>
using namespace std;

class BCT
{
    int roll , marks ;
    public:
        void getdata()
        {
            cout<<"Enter Data"<<endl ;
            cin>>roll>>marks;

        }
        void Showdata()
        {
            cout<<roll<<"\t" <<marks ;
        }
};

int main() {
    cout << "This is Example of Pointer to object and member access !!" <<endl;

    BCT  obj ;
    BCT *ptr;
    ptr = &obj ;
    ptr ->  getdata() ;
    ptr -> Showdata() ;


    return 0;
}
