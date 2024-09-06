#include <iostream>
using namespace std;

class Time
{
    int hh, mm , ss ;
    public:
        Time()
        {
            hh = 0 ;
            mm = 0 ;
            ss = 0 ;
        }
        void operator ()(int h,int m, int s)
        {
            hh=h;
            mm=m;
            ss=s;
        }
        void show()
        {
            cout<<"Time is "<<hh<<":"<<mm<<":"<<ss<<endl;
        }
};

int main() {
    cout << "This is simple Example of Function call overlaoding in C++!!" <<endl;

    Time t1;
    t1(10,30,0);
    t1.show();
    return 0;
}