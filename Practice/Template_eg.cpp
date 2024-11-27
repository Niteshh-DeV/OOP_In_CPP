#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using the template with integers
    int int1 = 10, int2 = 20;
    cout << "Maximum of " << int1 << " and " << int2 << " is " << findMax(int1, int2) << endl;

    // Using the template with floating-point numbers
    double double1 = 5.67, double2 = 3.14;
    cout << "Maximum of " << double1 << " and " << double2 << " is " << findMax(double1, double2) << endl;

    // Using the template with characters
    char char1 = 'A', char2 = 'Z';
    cout << "Maximum of " << char1 << " and " << char2 << " is " << findMax(char1, char2) << endl;

    return 0;
}