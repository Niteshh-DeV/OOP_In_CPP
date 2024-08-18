#include <iostream>
using namespace std;

class Student
{
    private: int Roll;
            char name[20];
            float marks;
    public: void Input()
        {
            cout<<"Enter Your Name Roll Number and marks:\n";
            cin>>name>>Roll>>marks;
        } 
        void output()
        {
            cout<<"Name : "<<name<<endl<<"Roll No. : "<<Roll<<endl<<"Marks : "<<marks<<endl;
        }
};

int main() {
    Student s1,s2,s3 ;

    s1.Input();
    s2.Input();
    s3.Input();
    cout << "Your Info is As :" <<endl;
    s1.output();
    s2.output();
    s3.output();
    return 0;
}