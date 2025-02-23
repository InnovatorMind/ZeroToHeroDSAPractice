# Getters and Setters: Controlled Access to Private Data

## **Why Use Getters and Setters?**

- **Encapsulation:** Protect private data by controlling how it's accessed or modified.
- **Validation:** Ensure that any data being set meets certain criteria.
- **Flexibility:** Change internal implementation without affecting external code.

## **Defining Getters and Setters**

### **Getter Methods**

- Used to **retrieve** the value of a private attribute.
- Typically named with a `get` prefix.

```cpp
class Employee {
private:
    int salary;

public:
    int getSalary() {
        return salary;
    }
};
```

### **Setter Methods**

- Used to **modify** the value of a private attribute.
- Typically named with a `set` prefix.
- Can include validation logic.

```cpp
class Employee {
private:
    int salary;

public:
    void setSalary(int s) {
        if (s >= 0) {
            salary = s;
        } else {
            cout << "Invalid salary amount." << endl;
        }
    }
};
```

## **Example Usage**

```cpp
int main() {
    Employee emp;
    emp.setSalary(5000);           // Sets salary to 5000
    cout << emp.getSalary();       // Outputs: 5000

    emp.setSalary(-1000);          // Invalid amount
    // Outputs: Invalid salary amount.
    
    return 0;
}
```

## **Best Practices**

- **Keep Data Private:** Always keep sensitive attributes private.
- **Validation in Setters:** Include checks to maintain object integrity.
- **Consistent Naming:** Use clear and consistent method names.

---

**Advantages:**

- **Data Integrity:** Prevents invalid data from being assigned.
- **Abstraction:** Hides the internal representation of the data.

---

**Next Steps:**

- Explore more about data hiding in [Data_Hiding.md](Data_Hiding.md).
- Try implementing getters and setters in practice exercises.

---

