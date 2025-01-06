#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Employee {
    char name[20];
    int id;
    char email[30];

public:
    void input() {
        cout << "Enter Name: ";
        cin>>name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Email: ";
        cin >> email;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Email: " << email << endl;
    }
};

int main() {
    Employee emp;
    fstream file;

    file.open("employee.bin", ios::out | ios::binary);

        cout << "Enter details of an employee:" << endl;
        emp.input();
        file.write((char *)&emp, sizeof(emp));

        file.close();

    file.open("employee.bin", ios::in | ios::binary);

    cout << "\nEmployee details stored in the file:" << endl;
    while (file.read((char *)&emp, sizeof(emp))) {
        emp.display();
        cout << "-----------------------" << endl;
    }
    file.close();

    return 0;
}