# Types of Inheritance in C++

Inheritance can occur in several forms, each serving different design needs.

## **1. Single Inheritance**

- **Definition:** A derived class inherits from only one base class.

**Example:**

```cpp
class Vehicle {
    // Base class code
};

class Car : public Vehicle {
    // Derived class code
};
```

## **2. Multiple Inheritance**

- **Definition:** A derived class inherits from more than one base class.

**Example:**

```cpp
class Engine {
    // Base class code
};

class Wheels {
    // Base class code
};

class Car : public Engine, public Wheels {
    // Derived class code
};
```

## **3. Multilevel Inheritance**

- **Definition:** A derived class inherits from a base class, which itself inherits from another base class.

**Example:**

```cpp
class Vehicle {
    // Base class code
};

class Car : public Vehicle {
    // Derived from Vehicle
};

class SportsCar : public Car {
    // Derived from Car
};
```

## **4. Hierarchical Inheritance**

- **Definition:** Multiple derived classes inherit from a single base class.

**Example:**

```cpp
class Vehicle {
    // Base class code
};

class Car : public Vehicle {
    // Derived class code
};

class Bike : public Vehicle {
    // Another derived class
};
```

## **5. Hybrid Inheritance**

- **Definition:** A combination of two or more types of inheritance.

**Example:**

Combining **Multiple** and **Multilevel** inheritance.

---

**Visual Representation:**

Here's a diagram representing different types of inheritance:

```
Single Inheritance:
   Vehicle
     |
     Car

Multiple Inheritance:
   Engine   Wheels
      \      /
       \    /
         Car

Multilevel Inheritance:
   Vehicle
     |
    Car
     |
  SportsCar

Hierarchical Inheritance:
     Vehicle
     /    \
   Car    Bike

Hybrid Inheritance:
     Vehicle
     /    \
   Car    Bike
     \    /
    FlyingVehicle
```

---

**Important Notes:**

- **Ambiguity in Multiple Inheritance:** Care must be taken to resolve name conflicts.
- **Virtual Base Classes:** Used to prevent multiple copies of a base class when using multiple inheritances (beyond this module's scope).

---

**Proceed to:**

- Understand base and derived class relationships in [Base_Derived_Classes.md](Base_Derived_Classes.md).
- Learn how to override methods in [Overriding_Methods.md](Overriding_Methods.md).

---
