// Exercise1_Solution.cpp

#include <iostream>
using namespace std;

// Abstract class Animal
class Animal {
public:
    // Pure virtual function
    virtual void speak() = 0;
    
    // Virtual destructor
    virtual ~Animal() {}
};

// Derived class Dog
class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog says: Woof!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat says: Meow!" << endl;
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    
    dog->speak();
    cat->speak();
    
    delete dog;
    delete cat;
    return 0;
}

