// Exercise2_Solution.cpp

#include <iostream>
using namespace std;

class Array {
private:
    int size;
    int *data;

public:
    // Parameterized constructor
    Array(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; i++)
            data[i] = 0;
    }

    // Copy constructor
    Array(const Array &arr) : size(arr.size) {
        data = new int[size];
        for (int i = 0; i < size; i++)
            data[i] = arr.data[i];
    }

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Set value at index
    void setValue(int index, int value) {
        if (index >= 0 && index < size)
            data[index] = value;
        else
            cout << "Index out of bounds." << endl;
    }

    // Get value at index
    int getValue(int index) {
        if (index >= 0 && index < size)
            return data[index];
        else {
            cout << "Index out of bounds." << endl;
            return -1;
        }
    }

    // Print array elements
    void printArray() {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Array arr1(5);

    // Set values for arr1
    for (int i = 0; i < 5; i++)
        arr1.setValue(i, i + 1); // Values 1 to 5

    // Copy arr1 to arr2
    Array arr2 = arr1;

    // Modify arr2
    arr2.setValue(0, 100);

    // Print arrays
    cout << "Array 1: ";
    arr1.printArray(); // Should print 1 2 3 4 5

    cout << "Array 2: ";
    arr2.printArray(); // Should print 100 2 3 4 5

    return 0;
}



// ## **Notes:**

// - **Deep Copy in Copy Constructor:**
//   - Allocated new memory for `data` and copied elements individually.
//   - Ensured that `arr1` and `arr2` have separate memory.

// - **Destructor:**
//   - Used `delete[]` to release the dynamic array.

// - **Validation:**
//   - Added checks for index bounds in `setValue` and `getValue` methods.

// ---

// ## **Additional Exercises (Optional):**

// - **Exercise 3:** Implement a `String` class that manages a dynamic character array, including proper copy constructor and destructor.
// - **Exercise 4:** Create a `Matrix` class with dynamic 2D arrays and implement constructors and destructors accordingly.

// ---

// ## **Final Thoughts:**

// Understanding constructors and destructors is crucial for managing resources and ensuring the robustness of your programs. Proper use of these special functions helps prevent memory leaks and undefined behaviors, especially when working with dynamic memory allocation.

// ---

// If you have any questions or need further clarification on any topic, feel free to ask!

// ---