#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // 1. Simple if statement
    if (a < b) {
        cout << "a is less than b" << endl;
    }

    // 2. if-else statement
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is not greater than b" << endl;
    }

    // 3. if-else if-else ladder
    if (a == b) {
        cout << "a is equal to b" << endl;
    } else if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is greater than b" << endl;
    }

    // 4. Nested if statement
    if (a != b) {
        if (a < b) {
            cout << "a is not equal to b and a is less than b" << endl;
        } else {
            cout << "a is not equal to b and a is greater than b" << endl;
        }
    }

    // 5. Switch statement
    int choice = 1;

    switch (choice) {
        case 1:
            cout << "Choice is 1" << endl;
            break;
        case 2:
            cout << "Choice is 2" << endl;
            break;
        case 3:
            cout << "Choice is 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
