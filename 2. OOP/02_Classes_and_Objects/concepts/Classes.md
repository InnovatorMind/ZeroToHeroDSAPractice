# Classes: The Blueprints of Objects

## **What is a Class?**

A **class** is a user-defined blueprint or prototype from which objects are created. It represents a set of properties (attributes) and methods (behaviors) that are common to all objects of one type.

- **Syntax Basics:**  
  In languages like C++, Java, and Python, a class is defined using the `class` keyword.

  ```cpp
  // C++ example
  class ClassName {
    // Access specifiers and members
  };
  ```

## **Components of a Class**

1. **Attributes (Data Members):** Variables that hold the state of an object.

2. **Methods (Member Functions):** Functions that define behaviors or actions of an object.

3. **Access Specifiers:** Keywords that set the accessibility of class members (`public`, `private`, `protected`).

## **Example: Defining a Class**

```cpp
// C++ example
class Car {
public:
    // Attributes
    string make;
    string model;
    int year;

    // Methods
    void startEngine() {
        cout << "Engine started." << endl;
    }
    
    void stopEngine() {
        cout << "Engine stopped." << endl;
    }
};
```

---

**Key Takeaways:**

- A class encapsulates data for the object.
- Defines a datatype, similar to a struct but with functions included.

---

**Next Topics:**

- Learn how to create instances in [Objects.md](Objects.md).
- Explore properties and behaviors in [Attributes_Methods.md](Attributes_Methods.md).

---