# Objects: Creating Instances of Classes

## **What is an Object?**

An **object** is an instance of a class. When a class is defined, no memory is allocated until an object is created.

- **Instance:** A specific realization of any object.

## **Creating Objects**

### **Syntax Examples:**

**C++:**

```cpp
Car myCar; // Creates an object of class Car
```

**Java:**

```java
Car myCar = new Car(); // Creates an object of class Car
```

**Python:**

```python
my_car = Car() # Creates an object of class Car
```

## **Accessing Members**

Once an object is created, you can access its attributes and methods using the dot (`.`) operator.

**Example:**

```cpp
myCar.make = "Toyota";
myCar.model = "Corolla";
myCar.year = 2020;

myCar.startEngine(); // Calls the startEngine() method
```

## **Memory Allocation**

- **Instantiation:** Allocates memory for the object.
- Each object has its own separate copy of the class's attributes.

---

**Why Objects Matter:**

- They allow us to model real-world entities.
- Facilitate modular and reusable code.

---

**Continue Learning:**

- Dive into [Attributes and Methods](Attributes_Methods.md) to understand object properties.
- Learn how to interact with object members in [Accessing_Members.md](Accessing_Members.md).

---
