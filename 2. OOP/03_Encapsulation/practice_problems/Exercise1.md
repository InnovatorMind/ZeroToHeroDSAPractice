# Exercise 1: Implementing Encapsulation in a Class

## **Objective:**

Create a class that encapsulates data and provides controlled access using getters and setters.

## **Task:**

1. **Define a class** named `Student` with private attributes:
   - `name` (string)
   - `age` (int)
   - `grade` (char)

2. **Include public methods**:
   - `setName(string n)`
   - `setAge(int a)` with validation that age is between 5 and 25.
   - `setGrade(char g)` with validation that grade is between 'A' and 'F'.
   - `getName()`, `getAge()`, `getGrade()` to return the respective attributes.

3. **In your `main` function**:
   - Create an object of the `Student` class.
   - Use setters to assign values to the attributes (include both valid and invalid values to test validations).
   - Use getters to display the student's information.

## **Example Output:**

```
Student Name: John Doe
Age: 20
Grade: B
```

If invalid data is provided:

```
Invalid age provided.
Invalid grade provided.
```

---

**Instructions:**

- Write your code in a file named `Exercise1.cpp`.
- Ensure proper validation in setter methods.
- Display appropriate error messages for invalid inputs.

---

**Hints:**

- Use conditional statements in setters for validation.
- Remember that characters in C++ are compared using their ASCII values.

---

