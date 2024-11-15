#include <iostream>
using namespace std;

// Virtual base class
class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class 1
class Dog : virtual public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// Derived class 2
class Cat : virtual public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};

// Multipath inheritance: Derived class 3 inherits from both Dog and Cat
class Pet : public Dog, public Cat {
public:
    void displayPet() {
        cout << "This is a pet." << endl;
    }
};

int main() {
    Pet myPet;

    // Now, the ambiguity of the `speak()` method is resolved
    myPet.speak();   // Calls the Animal's speak method only once

    myPet.bark();    // From Dog class
    myPet.meow();    // From Cat class
    myPet.displayPet(); // From Pet class

    return 0;
}