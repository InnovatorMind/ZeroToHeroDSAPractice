# Overriding Methods in Derived Classes

## **What is Method Overriding?**

Method overriding allows a derived class to provide a specific implementation of a method that is already defined in its base class.

- **Purpose:** Customize or extend the behavior of base class methods.

## **How to Override Methods**

- **Same Signature:** The method in the derived class must have the same name, return type, and parameters.
- **Access Specifier:** The overriding method should have an access specifier that allows it to be accessible where needed.

## **Example**

```cpp
class Animal {
public:
    void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Bark!" << endl;
    }
};
```

**Usage:**

```cpp
int main() {
    Animal a;
    a.makeSound(); // Output: Animal sound

    Dog d;
    d.makeSound(); // Output: Bark!
    return 0;
}
```

## **Polymorphism with Pointers**

- When dealing with pointers to base class types, to achieve runtime polymorphism, methods should be declared as `virtual` in the base class.

**Example with Virtual Functions:**

```cpp
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};
```

**Usage:**

```cpp
int main() {
    Animal *animalPtr = new Dog();
    animalPtr->makeSound(); // Output: Bark!
    delete animalPtr;
    return 0;
}
```

- **Explanation:** Without the `virtual` keyword, the base class method would be called instead of the derived class method.

## **Overriding vs. Overloading**

- **Overriding:** Redefining a base class method in a derived class.
- **Overloading:** Defining multiple methods with the same name but different parameters within the same scope.

## **Rules for Overriding:**

- The method must have the same name and parameter list.
- Return type should be the same (C++ allows covariant return types).
- Access level can be less restrictive but not more.
- The base class method should be declared with `virtual` to enable runtime polymorphism.

## **Using `override` Keyword**

- C++11 introduced the `override` keyword to ensure that a method is indeed overriding a base class method.

**Example:**

```cpp
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};
```

- If the method doesn't match any method from the base class, the compiler will generate an error.

---

**Benefits of Overriding:**

- **Customization:** Allows derived classes to provide specific behavior.
- **Extensibility:** Facilitates the addition of new functionalities.
- **Polymorphism:** Enables dynamic method binding at runtime.

---

**Proceed to Practice Problems:**

- Apply these concepts in [Exercise1.md](../practice_problems/Exercise1.md) and [Exercise2.md](../practice_problems/Exercise2.md).

---