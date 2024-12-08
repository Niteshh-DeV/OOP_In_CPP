#include <iostream>
#include <vector>
using namespace std;

// Template definition
template <typename T>
class Stack {
private:
    vector<T> elements; // Vector to store stack elements

public:
    // Push an element onto the stack
    void push(const T& element) {
        elements.push_back(element);
    }

    // Pop an element from the stack
    void pop() {
        if (elements.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        elements.pop_back();
    }

    // Get the top element of the stack
    T top() const {
        if (elements.empty()) {
            throw out_of_range("Stack is empty. No top element.");
        }
        return elements.back();
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }

    // Get the size of the stack
    size_t size() const {
        return elements.size();
    }
};

// Main function to demonstrate the Stack template
int main() {
    // Stack of integers
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Top element (int): " << intStack.top() << endl;
    intStack.pop();
    cout << "Top element after pop (int): " << intStack.top() << endl;

    // Stack of strings
    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    cout << "Top element (string): " << stringStack.top() << endl;
    stringStack.pop();
    cout << "Top element after pop (string): " << stringStack.top() << endl;

    return 0;
}