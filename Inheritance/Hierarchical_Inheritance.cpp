#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class - Dog inherits from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

// Derived class - Cat inherits from Animal
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat is meowing." << endl;
    }
};


int main() {
    cout << "A basic example of hierarchical inheritance in C++" <<endl;
    Dog dog;
    Cat cat;

    // Calling base class function
    dog.eat();
    cat.eat();

    // Calling derived class specific functions
    dog.bark();
    cat.meow();
    return 0;
}