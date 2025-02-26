# Exercise 1: Implementing Different Types of Inheritance

## **Objective:**

Create classes to demonstrate single, multilevel, and hierarchical inheritance.

## **Task:**

1. **Single Inheritance:**

   - Create a base class `Person` with attributes:
     - `name` (string)
     - Method `displayName()`
   - Create a derived class `Employee` that inherits from `Person` and adds:
     - `employeeID` (int)
     - Method `displayEmployee()`

2. **Multilevel Inheritance:**

   - Create a class `Manager` that inherits from `Employee` and adds:
     - `department` (string)
     - Method `displayManager()`

3. **Hierarchical Inheritance:**

   - Create a class `Student` that also inherits from `Person` and adds:
     - `studentID` (int)
     - Method `displayStudent()`

4. **In your `main` function:**

   - Create objects of `Employee`, `Manager`, and `Student`.
   - Assign values to their attributes.
   - Call their respective display methods to show the information.

## **Example Output:**

```
Name: Alice
Employee ID: 123

Name: Bob
Employee ID: 456
Department: Sales

Name: Charlie
Student ID: 789
```

---

**Instructions:**

- Write your code in a file named `Exercise1.cpp`.
- Use appropriate access specifiers.
- Ensure that the derived classes can access necessary members from the base class.

---

**Hints:**

- For multilevel inheritance, `Manager` should inherit from `Employee`, which in turn inherits from `Person`.
- Use `public` inheritance unless there's a specific reason to choose otherwise.

---
