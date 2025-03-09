# Exercise 2: Implement a Factory Pattern

## Objective:
Create a simple Factory Pattern example in C++ to instantiate objects based on a provided parameter.

## Task:
1. **Define an abstract class** `Animal` with a pure virtual method `speak()`.
2. **Implement two concrete classes:**
   - `Dog`: Implements `speak()` to print "Woof!".
   - `Cat`: Implements `speak()` to print "Meow!".
3. **Create a Factory class** `AnimalFactory` with a static method `createAnimal(const string &type)` that returns a pointer to the respective `Animal` object.
4. **In your `main` function:**
   - Use the factory to create a `Dog` and a `Cat`.
   - Call `speak()` on both to verify the correct objects are created.

## Expected Output:
```
Woof!
Meow!
```
