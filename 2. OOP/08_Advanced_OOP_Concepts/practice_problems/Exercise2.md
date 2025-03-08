# Exercise 2: Using Static Members and Friend Functions

## Objective:
Create a class `Student` that tracks the number of student objects using a static member and uses a friend function to print student details.

## Task:
1. **Define a class** `Student` with:
   - Private attributes: `name` (string) and `age` (int)
   - A static integer variable `count` to track the number of `Student` objects.
2. **Implement a constructor** that initializes the attributes and increments `count`.
3. **Write a friend function** `printStudent` that takes a `Student` object and prints its details.
4. **In your `main` function:**
   - Create at least two `Student` objects.
   - Use the friend function to display each student's details.
   - Display the total number of students using the static member.

## Expected Output:
```
Name: Alice, Age: 20
Name: Bob, Age: 22
Total Students: 2
```

---

**Instructions:**
- Write your code in a file named `Exercise2.cpp`.
- Ensure proper use of static members and friend functions.
```
