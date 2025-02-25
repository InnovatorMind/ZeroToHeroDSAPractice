# Destructors in C++

## **What is a Destructor?**

A **destructor** is a special member function of a class that is executed whenever an object of its class goes out of scope or is explicitly deleted. Destructors have the same name as the class but are preceded by a tilde (`~`) and have no parameters or return type.

- **Purpose:** Clean up and release resources allocated by the object during its lifetime.

## **Characteristics of Destructors:**

- **Same Name as Class with Tilde:** `~ClassName()`.
- **No Parameters and No Return Type.**
- **Automatically Invoked:**
  - When an object goes out of scope.
  - When `delete` is used on an object pointer.

## **Example:**

```cpp
class FileHandler {
private:
    FILE *file;

public:
    // Constructor
    FileHandler(const char *filename) {
        file = fopen(filename, "w");
        if (file)
            cout << "File opened." << endl;
    }

    // Destructor
    ~FileHandler() {
        if (file) {
            fclose(file);
            cout << "File closed." << endl;
        }
    }
};

int main() {
    {
        FileHandler fh("example.txt");
        // File operations
    } // fh goes out of scope here, destructor is called

    return 0;
}
```

**Output:**

```
File opened.
File closed.
```

## **When are Destructors Called?**

- **Automatic Objects:** When they go out of scope.
- **Dynamic Objects:** When `delete` is used.
- **Program Termination:** For global and static objects.

## **Important Notes:**

- **One Destructor per Class:** Unlike constructors, you cannot overload destructors.
- **Order of Destruction:** Destructors are called in the reverse order of constructors.

---

**Use Cases:**

- **Resource Management:** Close files, release memory, disconnect from networks.
- **Cleanup Tasks:** Delete temporary files, flush buffers.

---

**Proceed to:**

- Learn about different constructor types in [Constructor_Types.md](Constructor_Types.md).
- Review best practices in [Best_Practices.md](Best_Practices.md).

---
