# Access Modifiers in C++

## **Introduction**

Access modifiers define the accessibility of class members. They are instrumental in implementing encapsulation by controlling how data and methods are accessed.

## **Types of Access Modifiers**

1. **public**
   - Members declared as `public` are accessible from anywhere where the object is visible.
2. **private**
   - Members declared as `private` can only be accessed by functions within the class.
3. **protected**
   - Members declared as `protected` can be accessed within the class and by derived class(es).

## **Syntax**

```cpp
class ClassName {
  access_modifier:
    // Members
};
```

**Example:**

```cpp
class BankAccount {
private:
    double balance; // Private: Only accessible within the class

public:
    void deposit(double amount); // Public: Accessible from outside
    void withdraw(double amount);
};
```

## **Usage Guidelines**

- **private:** For internal data that should not be exposed directly.
- **public:** For methods that provide controlled access and functionality.
- **protected:** Often used in inheritance (to be covered later).

---

**Important Notes:**

- By default, members of a class are `private` if no access modifier is specified.
- Structs default to `public` access.

---

**Proceed to:**

- Learn how to use getters and setters in [Getters_Setters.md](Getters_Setters.md) to provide controlled access to private data.
- Understand the significance of data hiding in [Data_Hiding.md](Data_Hiding.md).

---

