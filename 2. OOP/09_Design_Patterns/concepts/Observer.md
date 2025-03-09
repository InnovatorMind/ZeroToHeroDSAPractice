# Observer Pattern

## What is the Observer Pattern?

The Observer Pattern defines a one-to-many dependency between objects so that when one object (the subject) changes state, all its dependents (observers) are notified and updated automatically.

## Use Cases:
- Implementing event handling systems.
- Creating systems where changes in one part of the application require updates in other parts.

## Example (in C++):

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Observer {
public:
    virtual void update(const string &message) = 0;
};

class Subject {
private:
    vector<Observer*> observers;
public:
    void addObserver(Observer* obs) {
        observers.push_back(obs);
    }

    void removeObserver(Observer* obs) {
        observers.erase(remove(observers.begin(), observers.end(), obs), observers.end());
    }

    void notify(const string &message) {
        for (Observer* obs : observers) {
            obs->update(message);
        }
    }
};

class ConcreteObserver : public Observer {
private:
    string name;
public:
    ConcreteObserver(const string &n) : name(n) {}
    void update(const string &message) override {
        cout << name << " received message: " << message << endl;
    }
};

int main() {
    Subject subject;
    ConcreteObserver observer1("Observer1");
    ConcreteObserver observer2("Observer2");

    subject.addObserver(&observer1);
    subject.addObserver(&observer2);

    subject.notify("Hello Observers!");

    return 0;
}
```

## Key Points:
- The Observer Pattern helps decouple the subject from its observers.
- It is widely used in GUI toolkits and event-driven systems.
```
