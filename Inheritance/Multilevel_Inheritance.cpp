#include <iostream>
using namespace std;

class student
{
    protected : int roll;
                char name[25];
    public:
            void getdata()
            {
                cout<<"Enter Name and roll no. ";
                cin>>name>>roll;
            }
            void putdata()
            {
                cout<<name<<endl<<roll<<endl;
            }
};

class test :public student
{
    protected: float sub1 , sub2 ;
    public:
            void getmarks(float x , float y)
            {
                sub1 = x ;
                sub2 = y ;
            }
            void putmarks()
            {
                cout<<sub1 << endl<< sub2 ;
            }
};

class result : public test
{
    float total ;
    public:
            void dispaly()
            {
                student :: putdata();
                test :: putmarks();
                total = sub1 + sub2 ;

                cout<<"\n Total = "<<total ;
            }
};

int main() {
    cout << "This is Simple example of multilevel inheritance in C++" <<endl;

    result r ;
    r.getdata();
    r.getmarks(60.5,90.5);

    r.dispaly();
    return 0;
}