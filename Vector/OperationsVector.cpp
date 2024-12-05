#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Add elements
    vec.push_back(10); // Add 10
    vec.push_back(20); // Add 20

    // Access elements
    std::cout << "First element: " << vec[0] << std::endl; // Using []
    std::cout << "Second element: " << vec.at(1) << std::endl; // Using at()

    // Size of the vector
    std::cout << "Size: " << vec.size() << std::endl;

    // Iterate using a loop
    std::cout << "Elements: ";
    for (int value : vec) {
        std::cout << value << " ";
    }

    // Remove last element
    vec.pop_back();
    std::cout << "\nAfter pop_back, size: " << vec.size() << std::endl;

    return 0;
}