// #include <iostream>
// using namespace std;
// class Unary
// {
//     int count ;
//     public:
//             Unary()
//             {
//                 count = 0 ;
//             }
//     void  operator ++ ()
//     {
//         ++count ;
//     }
//     void display()
//     {
//         cout<<count;
//     }
// };

// int main() {
//     Unary obj1 , obj2;
//     cout << "This Is Example of  Unary prefix Operator" << endl;
//     ++obj1;
//     ++obj2;
//     ++obj2;
//     cout << "Count of obj1 is " ;obj1.display() ;
//     cout << "\n Count of obj2 is " ;obj2.display() ;
//     return 0;
// }
 //Example of  Unary Postfix Operator


#include <iostream>
using namespace std;
class Unary
{
    int count ;
    public:
            Unary()
            {
                count = 0 ;
            }
    void  operator ++ (int)
    {
       count++;
    }
    void display()
    {
        cout<<count;
    }
};

int main() {
    Unary obj1 , obj2;
    cout << "This Is Example of  Unary postfix Operator" << endl;
    obj1++;
    obj2++;
    obj2++;
    cout << "Count of obj1 is " ;obj1.display() ;
    cout << "\n Count of obj2 is " ;obj2.display() ;
    return 0;
}