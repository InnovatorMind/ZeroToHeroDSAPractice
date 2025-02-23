# Exercise 2: Refactoring Code to Use Getters and Setters

## **Objective:**

Modify existing code to improve encapsulation by using getters and setters.

## **Task:**

1. **Given the following class definition**:

   ```cpp
   class Rectangle {
   public:
       int width;
       int height;

       int area() {
           return width * height;
       }
   };
   ```

2. **Refactor the `Rectangle` class**:

   - Make `width` and `height` private.
   - Add setter methods `setWidth(int w)` and `setHeight(int h)` with validation that the values are positive integers.
   - Add getter methods `getWidth()` and `getHeight()`.
   - Keep the `area()` method public.

3. **In your `main` function**:

   - Create an object of the `Rectangle` class.
   - Attempt to set negative values to test validation.
   - Calculate and display the area of the rectangle.

## **Expected Behavior:**

- When negative values are provided, display an error message: "Invalid value for width/height."
- When valid values are provided, display the area.

---

**Instructions:**

- Write your code in a file named `Exercise2.cpp`.
- Ensure that direct access to `width` and `height` is not possible from outside the class.
- Comment your code to explain changes.

---

**Hints:**

- After making `width` and `height` private, attempting to access them directly (e.g., `rect.width`) should result in a compilation error.

---

