#include <iostream>
using namespace std;
class election 
{
    static int count;
    int citizen_no ;
    char name[20] , adress[30];
    public:
        void input()
        {
            cout<<"Enter Name , citizen number and your adress : "<<endl;
            cin>>name>>citizen_no>>adress;
            count++;
        }
        void  display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Citizen Number : "<<citizen_no<<endl;
            cout<<"Adress  : "<<adress<<endl;

        }
        static void total_records ()
        {
            cout<<"Total records = "<<count ;
        }
        

};
int election:: count ;


int main() {
    cout << "This is a Simple examlpe for DMA for object and object array!!" <<endl;

    int i ,n ;
    election* ptr;

    cout<<"How many citizen you want to enter ? "<<endl;
    cin>>n ;
    
    ptr = new  election[n];
    for(i=0 ; i<n ; i++)
    {
        ptr[i].input();
    }

    election::total_records();


    for(i=0 ; i<n ; i++)
    {
        ptr[i].display();
    }
    return 0;
}
