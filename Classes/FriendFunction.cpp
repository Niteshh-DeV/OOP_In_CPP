#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    // Constructor to initialize width
    Box(double w) : width(w) {}

    // Friend function declaration
    friend void showWidth(Box& b);
};

// Friend function definition
void showWidth(Box& b) {
    // Accessing private member of Box class
    cout << "Width of the box: " << b.width << endl;
}

int main() {
    // Creating an object of Box class
    Box boxObj(10.5);

    // Calling the friend function
    showWidth(boxObj);

    return 0;
}
