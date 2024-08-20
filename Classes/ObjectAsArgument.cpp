#include <iostream>
using namespace std;
class Time
{
    int hours , minuets;
    public:
            void gettime()
            {   int h,m ;
                cout<<"Enter Time : ";
                cin>>h>>m;
                hours = h ;
                minuets = m ;

            }
            void displaytime()
            {
                cout<<hours<<"Hours And"<<minuets<<"Minuets";
            }
            void sum(Time, Time);
};
void Time :: sum (Time t1, Time t2)
{
    minuets = t1.minuets + t2.minuets ;
    hours = minuets / 60 ;
    minuets =minuets % 60 ;
    hours = hours + t1.hours + t2.hours ;
}
int main()
{   
    Time T1,T2,T3;
    T1.gettime();
    T2.gettime();

    T3.sum(T1 ,T2);
    T3.displaytime();

    return 0;
}