# Inheritance in Object-Oriented Programming

## **What is Inheritance?**

**Inheritance** is an OOP concept where a new class (derived class) inherits attributes and methods from an existing class (base class). It allows the derived class to reuse code from the base class and extend or customize it.

- **Purpose:** Promote code reusability and establish a natural hierarchical relationship between classes.

## **Key Terminology**

- **Base Class (Parent Class):** The class being inherited from.
- **Derived Class (Child Class):** The class that inherits from the base class.
- **Access Specifiers in Inheritance:** Determines how the members of the base class are accessible to the derived class.

## **Syntax in C++**

```cpp
class DerivedClass : access-specifier BaseClass {
    // Members of DerivedClass
};
```

- **Access Specifier:** `public`, `protected`, or `private`.

## **Example**

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};
```

**Usage:**

```cpp
int main() {
    Dog myDog;
    myDog.eat();   // Inherited from Animal
    myDog.bark();  // Defined in Dog
    return 0;
}
```

**Output:**

```
Eating...
Barking...
```

---

**Benefits of Inheritance:**

- **Code Reusability:** Avoids duplication by using existing code.
- **Extensibility:** Allows adding new features to existing classes.
- **Polymorphism Support:** Facilitates runtime polymorphism.

---

**Next Topics:**

- Explore different forms of inheritance in [Inheritance_Types.md](Inheritance_Types.md).
- Understand class relationships in [Base_Derived_Classes.md](Base_Derived_Classes.md).

---

