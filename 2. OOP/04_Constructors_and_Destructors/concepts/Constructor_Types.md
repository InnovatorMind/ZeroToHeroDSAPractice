# Types of Constructors in C++

Constructors can be categorized based on the parameters they accept and their usage.

## **1. Default Constructor**

- **Definition:** A constructor with no parameters.
- **Purpose:** Initialize objects with default values.

**Example:**

```cpp
class MyClass {
public:
    MyClass() {
        // Initialization code
    }
};
```

## **2. Parameterized Constructor**

- **Definition:** A constructor that takes arguments.
- **Purpose:** Initialize objects with specific values provided at creation.

**Example:**

```cpp
class MyClass {
private:
    int value;

public:
    MyClass(int v) {
        value = v;
    }
};
```

**Usage:**

```cpp
MyClass obj(10); // Object initialized with value 10
```

## **3. Copy Constructor**

- **Definition:** A constructor that initializes an object using another object of the same class.
- **Syntax:** `ClassName(const ClassName &obj)`
- **Purpose:** Create a new object as a copy of an existing object.

**Example:**

```cpp
class MyClass {
private:
    int data;

public:
    MyClass(int d) {
        data = d;
    }

    // Copy constructor
    MyClass(const MyClass &obj) {
        data = obj.data;
    }
};
```

**Usage:**

```cpp
MyClass obj1(5);
MyClass obj2 = obj1; // Calls copy constructor
```

## **4. Constructor Overloading**

- **Definition:** Defining multiple constructors with different parameter lists.
- **Purpose:** Allow objects to be initialized in different ways.

**Example:**

```cpp
class MyClass {
public:
    MyClass() {
        // Default initialization
    }

    MyClass(int x) {
        // Initialization with one parameter
    }

    MyClass(int x, int y) {
        // Initialization with two parameters
    }
};
```

## **5. Default Copy Constructor vs. Deep Copy**

- **Default Copy Constructor:**
  - Provided by the compiler if no custom copy constructor is defined.
  - Performs a **shallow copy** (member-wise copy).
- **Deep Copy:**
  - Necessary when an object has pointers or dynamic memory allocation.
  - Custom copy constructor required to allocate separate memory and copy data.

**Example of Deep Copy:**

```cpp
class MyClass {
private:
    int *ptr;

public:
    MyClass(int val) {
        ptr = new int(val);
    }

    // Deep Copy Constructor
    MyClass(const MyClass &obj) {
        ptr = new int(*obj.ptr);
    }

    ~MyClass() {
        delete ptr;
    }
};
```

---

**Understanding the different types of constructors allows you to control how objects are initialized and managed in your programs.**

---

**Next Topics:**

- Review best practices in using constructors and destructors in [Best_Practices.md](Best_Practices.md).
- Apply these concepts in the practice problems.

---
