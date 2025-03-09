# Exercise 1: Implement a Singleton Class

## Objective:
Implement the Singleton Pattern in C++ to ensure that a class has only one instance and provides a global point of access to it.

## Task:
1. **Define a class** `Logger` with:
   - A private static pointer to its own instance.
   - A private constructor.
   - A public static method `getInstance()` to access the single instance.
   - A public method `logMessage(const string &msg)` that prints a log message.
2. **In your `main` function:**
   - Demonstrate that multiple calls to `getInstance()` return the same instance.
   - Call `logMessage()` to print a sample message.

## Expected Output:
```
Logger instance created.
Log: First message.
Log: Second message.
```

---

**Instructions:**
- Write your code in a file named `Exercise1.cpp`.
```
