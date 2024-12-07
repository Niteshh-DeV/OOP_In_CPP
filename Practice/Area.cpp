#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            length = width = 0; // Default to 0 if invalid values are given
        }
    }

    void setDimensions(double l, double w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            cout << "Invalid dimensions! Dimensions must be positive." << endl;
        }
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }

    void displayDetails() {
        cout << "Rectangle Details:" << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect(length, width);

    rect.displayDetails();

    // Allow the user to update dimensions
    cout << "\nWould you like to update the dimensions? (yes/no): ";
    string choice;
    cin >> choice;

    if (choice == "yes" || choice == "Yes") {
        cout << "Enter the new length: ";
        cin >> length;
        cout << "Enter the new width: ";
        cin >> width;
        rect.setDimensions(length, width);
        rect.displayDetails();
    } else {
        cout << "Thank you!" << endl;
    }

    return 0;
}