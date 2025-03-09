// Exercise2_Solution.cpp

#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow!" << endl;
    }
};

class AnimalFactory {
public:
    static unique_ptr<Animal> createAnimal(const string &type) {
        if (type == "Dog")
            return make_unique<Dog>();
        else if (type == "Cat")
            return make_unique<Cat>();
        else
            return nullptr;
    }
};

int main() {
    auto animal1 = AnimalFactory::createAnimal("Dog");
    auto animal2 = AnimalFactory::createAnimal("Cat");

    if (animal1) animal1->speak();
    if (animal2) animal2->speak();

    return 0;
}

// ---

// ## Final Notes

// - **Design Patterns** offer structured, proven ways to solve common problems in software design.
// - This module demonstrates two examples: the Singleton and Factory patterns.
// - Experiment with adding more patterns (such as Observer, Strategy, etc.) or combining patterns in your projects.

// If you have any questions or need further details, feel free to ask!

// Happy coding and enjoy refining your design skills!
