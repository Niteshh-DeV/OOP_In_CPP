#include <iostream>
#include <string>
using namespace std;

class Outer {
private:
    string outerName;

public:
    Outer(string name) : outerName(name) {}

    void showOuter() {
        cout << "Outer Class Name: " << outerName << endl;
    }

    // Nested class
    class Inner {
    private:
        string innerName;

    public:
        Inner(string name) : innerName(name) {}

        void showInner() {
            cout << "Inner Class Name: " << innerName << endl;
        }
    };
};

int main() {
    // Creating an object of the outer class
    Outer outerObj("OuterClass");

    // Creating an object of the nested class
    Outer::Inner innerObj("InnerClass");

    // Displaying names
    outerObj.showOuter();
    innerObj.showInner();

    return 0;
}
