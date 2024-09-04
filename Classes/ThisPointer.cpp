#include <iostream>
using namespace std;

class Box 
{
    int length ;
    public:
        Box (int l)
        {
            this -> length = l ;
        }
        void setlength(int m)
        {
            this -> length=m ;
        }
        int getlength()
        {
            return this->length ;
        }

        Box* increselength(int incr)
        {
            this->length += incr ;
            return this ;
        }
};

int main() {
    cout << " This Is a simple example of this pointer !!" <<endl;

    Box b(10);
    cout << "Initial length of the box is: " << b.getlength() << endl;

    b.increselength(10) -> increselength(30);
    

    cout<<  "Final length of the box is: "<< b.getlength() << endl;

    return 0;
}
