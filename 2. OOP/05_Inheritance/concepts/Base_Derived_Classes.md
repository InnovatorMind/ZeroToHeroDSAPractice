# Understanding Base and Derived Classes

## **Base Class (Parent Class)**

- **Definition:** The class whose properties and methods are inherited.
- **Purpose:** Provide common attributes and behaviors to derived classes.

## **Derived Class (Child Class)**

- **Definition:** The class that inherits properties and methods from the base class.
- **Purpose:** Extend or customize the base class functionalities.

## **Access Specifiers in Inheritance**

The access specifier used in the derived class declaration affects the accessibility of the base class members in the derived class.

- **Public Inheritance (`public`):**

  | Base Class Member | Access in Derived Class |
  |-------------------|-------------------------|
  | `public`          | `public`                |
  | `protected`       | `protected`             |
  | `private`         | Not Inherited           |

- **Protected Inheritance (`protected`):**

  | Base Class Member | Access in Derived Class |
  |-------------------|-------------------------|
  | `public`          | `protected`             |
  | `protected`       | `protected`             |
  | `private`         | Not Inherited           |

- **Private Inheritance (`private`):**

  | Base Class Member | Access in Derived Class |
  |-------------------|-------------------------|
  | `public`          | `private`               |
  | `protected`       | `private`               |
  | `private`         | Not Inherited           |

## **Syntax Examples**

**Public Inheritance:**

```cpp
class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

class Derived : public Base {
    // publicVar remains public
    // protectedVar remains protected
    // privateVar is not accessible
};
```

**Protected Inheritance:**

```cpp
class Derived : protected Base {
    // publicVar becomes protected
    // protectedVar remains protected
    // privateVar is not accessible
};
```

**Private Inheritance:**

```cpp
class Derived : private Base {
    // publicVar becomes private
    // protectedVar becomes private
    // privateVar is not accessible
};
```

## **Examples**

### **Derived Class Extending Base Class**

```cpp
class Animal {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    void display() {
        cout << "I am an animal named " << name << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << name << " says Woof!" << endl;
    }
};
```

**Usage:**

```cpp
int main() {
    Dog myDog;
    myDog.setName("Buddy");
    myDog.display(); // Output: I am an animal named Buddy
    myDog.bark();    // Output: Buddy says Woof!
    return 0;
}
```

---

**Key Points:**

- The derived class inherits accessible members from its base class.
- Private members of the base class are not accessible directly but can be accessed through public/protected methods.
- Understanding access control is crucial for proper class design.

---

**Proceed to:**

- Learn how to override methods and customize behavior in [Overriding_Methods.md](Overriding_Methods.md).

---

