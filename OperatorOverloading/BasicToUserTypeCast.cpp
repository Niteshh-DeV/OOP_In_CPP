#include<iostream>
using namespace std;
class Time
{
    int hh,mm,ss;
   public: Time ()
 {
    hh=0;
    mm=0;
    ss=0;

 }  
 Time(int s){
    hh=s/3600;
    s=s%60;
    mm=s/60;
    ss=s%60;

 } 
 void show ()
 {
   cout<<hh<<":"<<mm<<":"<<ss;
 }
};


int main()
{
   Time t1,t2;
   t1=207040;
   t2=Time(308031);
   cout<<"time t1:\t";t1.show(); 
   cout<<endl;
   cout<<"time t2:\t";t2.show();
   return 0;
}
