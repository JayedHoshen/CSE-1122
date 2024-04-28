#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a generic sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the makeSound() method of the base class
    void makeSound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Overriding the makeSound() method of the base class
    void makeSound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

int main() {
    Animal *ptr;

    Dog myDog;
    Cat myCat;

    ptr = &myDog;
    ptr->makeSound(); // Calls Dog's makeSound() method

    ptr = &myCat;
    ptr->makeSound(); // Calls Cat's makeSound() method

    return 0;
}
