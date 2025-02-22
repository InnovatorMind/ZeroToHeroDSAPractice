# Attributes and Methods: Properties and Behaviors

## **Attributes (Data Members)**

Attributes are variables within a class that represent the state or characteristics of an object.

- **Types of Attributes:**
  - **Instance Variables:** Unique to each object.
  - **Class Variables:** Shared among all instances of a class (static variables).

**Example:**

```cpp
class Car {
public:
    string make;      // Instance variable
    string model;     // Instance variable
    static int count; // Class variable
};
```

## **Methods (Member Functions)**

Methods define the behaviors or functionalities of objects.

- **Types of Methods:**
  - **Instance Methods:** Operate on individual objects.
  - **Class Methods:** Operate on the class itself (static methods).

**Example:**

```cpp
class Car {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
    
    static void showCount() {
        cout << "Total cars: " << count << endl;
    }
};
```

## **Constructors and Destructors**

- **Constructor:** A special method called when an object is instantiated.
- **Destructor:** A method called when an object is destroyed (C++ specific).

---

**Importance of Attributes and Methods:**

- **Attributes:** Define what an object **is**.
- **Methods:** Define what an object **does**.

---

**What's Next:**

- Learn how to access and manipulate these members in [Accessing_Members.md](Accessing_Members.md).
- Try implementing your own classes and objects in the practice exercises.

---

