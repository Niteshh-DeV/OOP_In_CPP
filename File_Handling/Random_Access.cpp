#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student {
private:
    char name[50];
    int id;
    char email[50];
    
public:
    // Method to input student data
    void input() {
        cout << "Enter Name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Email: ";
        cin.ignore();
        cin.getline(email, 50);
    }

    // Method to display student data
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Email: " << email << endl;
    }
};

int main() {
    fstream file;
    Student student;
    int recordSize = sizeof(student);

    // Writing records to the binary file
    file.open("student.dat", ios::out | ios::binary);
    if (!file) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i < 15; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        student.input();
        file.write(reinterpret_cast<char*>(&student), sizeof(student));
    }
    file.close();

    // Reading the 10th record using random access
    file.open("student.dat", ios::in | ios::binary);
    if (!file) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    file.seekg((10 - 1) * recordSize, ios::beg); // Move to the 10th record
    file.read(reinterpret_cast<char*>(&student), sizeof(student));
    
    cout << "\nDetails of the 10th student:\n";
    student.display();

    file.close();
    return 0;
}