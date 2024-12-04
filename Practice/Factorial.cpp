#include <iostream>
using namespace std;

// Function to calculate factorial iteratively
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate factorial recursively
int factorialRecursive(int n) {
    if (n <= 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int number;
    cout << "Enter a positive integer to find its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial of a negative number doesn't exist.\n";
    } else {
        cout << "Factorial (Iterative): " << factorialIterative(number) << endl;
        cout << "Factorial (Recursive): " << factorialRecursive(number) << endl;
    }

    return 0;
}