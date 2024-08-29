#include <iostream>

class Rectangle {
    private:
        int width;
        int height;

    public:
        Rectangle()
        {
           std::cout<<"This is  default constructor"<<std::endl;

        }    
        // Constructor with two parameters
        Rectangle(int w, int h) {
            width = w;
            height = h;
        }

        // Method to calculate the area of the rectangle
        int area() {
            return width * height;
        }

        // Method to display the dimensions of the rectangle
        void display() {
            std::cout << "Width: " << width << ", Height: " << height << std::endl;
        }
};

int main() {
    // Create a Rectangle object using the constructor
    Rectangle r1; // Default constructor
    Rectangle rect1(5, 10);

    // Display the dimensions of the rectangle
    rect1.display();

    // Calculate and display the area of the rectangle
    std::cout << "Area: " << rect1.area() << std::endl;

    return 0;
}