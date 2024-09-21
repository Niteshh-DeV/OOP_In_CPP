#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, originalNum, remainder, result = 0, digits = 0;

    // Input number
    cout << "Enter a number: ";
    cin >> n;

    // Store the original number
    originalNum = n;

    // Find the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }

    // Reset originalNum to the input number
    originalNum = n;

    // Calculate the sum of each digit raised to the power of number of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}
