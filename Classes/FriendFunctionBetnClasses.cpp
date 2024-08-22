#include <iostream>
using namespace std;

class B; // Forward declaration of class B

class A {
private:
    int valueA;

public:
    // Constructor to initialize valueA
    A(int a) : valueA(a) {}

    // Friend function declaration
    friend void add(A& objA, B& objB);
};

class B {
private:
    int valueB;

public:
    // Constructor to initialize valueB
    B(int b) : valueB(b) {}

    // Friend function declaration
    friend void add(A& objA, B& objB);
};

// Friend function definition
void add(A& objA, B& objB) {
    int sum = objA.valueA + objB.valueB;
    cout << "Sum of values: " << sum << endl;
}

int main() {
    // Creating objects of classes A and B
    A objA(10);
    B objB(20);

    // Calling the friend function
    add(objA, objB);

    return 0;
}
