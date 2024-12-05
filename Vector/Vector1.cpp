#include <iostream>
#include <vector>

int main() {
    // Empty vector of integers
    std::vector<int> vec1;

    // Initialize vector using push_back for older compilers
    std::vector<int> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
    vec2.push_back(4);
    vec2.push_back(5);

    // Vector with 5 elements, all initialized to 10
    std::vector<int> vec3(5, 10);

    // Use a traditional for loop instead of range-based for
    for (size_t i = 0; i < vec2.size(); ++i) {
        std::cout << vec2[i] << " ";
    }
    

    return 0;
}