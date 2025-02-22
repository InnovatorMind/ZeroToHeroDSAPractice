# Accessing Members of a Class

## **The Dot Operator (`.`)**

The dot operator is used to access attributes and methods of an object.

**Syntax:**

```cpp
objectName.memberName;
```

## **Accessing Attributes**

```cpp
myCar.make = "Toyota";
myCar.model = "Corolla";
```

- Sets the `make` and `model` attributes of the `myCar` object.

## **Calling Methods**

```cpp
myCar.startEngine();
```

- Invokes the `startEngine()` method of the `myCar` object.

## **Access Specifiers Impact**

- **Public Members:** Accessible from outside the class.
- **Private Members:** Accessible only within the class.
- **Protected Members:** Accessible within the class and its subclasses.

## **Example with Access Specifiers:**

```cpp
class Car {
private:
    string vinNumber; // Private attribute

public:
    void setVinNumber(string vin) {
        vinNumber = vin;
    }
    
    string getVinNumber() {
        return vinNumber;
    }
};

int main() {
    Car myCar;
    // myCar.vinNumber = "123ABC"; // Error: vinNumber is private
    myCar.setVinNumber("123ABC");   // Correct way to set private attribute
    cout << myCar.getVinNumber();   // Accessing private attribute via public method
    return 0;
}
```

---

**Why Access Control Matters:**

- **Encapsulation:** Protects the integrity of object data.
- **Controlled Access:** Provides methods to safely interact with private members.

---

**Try It Yourself:**

- Modify the attributes of objects in the practice exercises.
- Experiment with different access specifiers.

---


---

### **02_Classes_and_Objects/practice_problems/Exercise1.md**

```markdown
# Exercise 1: Creating a Simple Class

## **Objective:**

Define a class that models a **Book** with attributes and methods.

## **Task:**

1. **Define a class** named `Book` that has the following **attributes**:
   - `title` (string)
   - `author` (string)
   - `pages` (int)

2. **Include methods**:
   - `printDetails()`: Displays the book's details.

3. **In your `main` function**:
   - Create an object of the `Book` class.
   - Assign values to the object's attributes.
   - Call the `printDetails()` method.

## **Example Output:**

```
Title: The Great Gatsby
Author: F. Scott Fitzgerald
Pages: 180
```

---

**Instructions:**

- Write your code in a file named `Exercise1.cpp`.
- Use appropriate access specifiers for class members.
- Comment your code for clarity.

---

**Hints:**

- Remember to declare methods within the class.
- Ensure that `printDetails()` outputs the attributes formatted as shown.

---

```

---

### **02_Classes_and_Objects/practice_problems/Exercise2.md**

```markdown
# Exercise 2: Instantiating Objects and Manipulating Attributes

## **Objective:**

Work with multiple objects and modify their attributes.

## **Task:**

1. **Define a class** named `BankAccount` with attributes:
   - `accountNumber` (string)
   - `accountHolder` (string)
   - `balance` (double)

2. **Include methods**:
   - `deposit(double amount)`: Adds `amount` to `balance`.
   - `withdraw(double amount)`: Subtracts `amount` from `balance` if sufficient funds are available.
   - `printAccountDetails()`: Displays the account details.

3. **In your `main` function**:
   - Create two `BankAccount` objects: `account1` and `account2`.
   - Initialize their attributes with different values.
   - Perform deposits and withdrawals.
   - Display their details using `printAccountDetails()`.

## **Example Output:**

```
Account Number: 123456789
Account Holder: Alice Smith
Balance: $1500.00

Account Number: 987654321
Account Holder: Bob Johnson
Balance: $2500.00
```

---

**Instructions:**

- Write your code in a file named `Exercise2.cpp`.
- Handle cases where withdrawal amounts exceed the balance.
- Format currency output to two decimal places.

---

**Hints:**

- Use conditional statements to check for sufficient balance.
- The `deposit()` and `withdraw()` methods should update the `balance` attribute.

---

```

---

### **02_Classes_and_Objects/practice_problems/Solutions/Exercise1_Solution.cpp**

```cpp
// Exercise1_Solution.cpp

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    // Setter methods
    void setTitle(string t) {
        title = t;
    }

    void setAuthor(string a) {
        author = a;
    }

    void setPages(int p) {
        pages = p;
    }

    // Method to print details
    void printDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    Book myBook;

    // Setting attributes
    myBook.setTitle("The Great Gatsby");
    myBook.setAuthor("F. Scott Fitzgerald");
    myBook.setPages(180);

    // Displaying book details
    myBook.printDetails();

    return 0;
}
```

---

### **02_Classes_and_Objects/practice_problems/Solutions/Exercise2_Solution.cpp**

```cpp
// Exercise2_Solution.cpp

#include <iostream>
#include <string>
#include <iomanip> // For setting precision
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Setter methods
    void setAccountNumber(string num) {
        accountNumber = num;
    }

    void setAccountHolder(string holder) {
        accountHolder = holder;
    }

    void setBalance(double b) {
        balance = b;
    }

    // Method to deposit amount
    void deposit(double amount) {
        balance += amount;
    }

    // Method to withdraw amount
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }

    // Method to print account details
    void printAccountDetails() {
        cout << fixed << setprecision(2);
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl << endl;
    }
};

int main() {
    BankAccount account1, account2;

    // Initializing account1
    account1.setAccountNumber("123456789");
    account1.setAccountHolder("Alice Smith");
    account1.setBalance(1000.00);

    // Operations on account1
    account1.deposit(500.00);
    account1.withdraw(200.00);

    // Initializing account2
    account2.setAccountNumber("987654321");
    account2.setAccountHolder("Bob Johnson");
    account2.setBalance(3000.00);

    // Operations on account2
    account2.withdraw(500.00);

    // Displaying account details
    account1.printAccountDetails();
    account2.printAccountDetails();

    return 0;
}
```

---

## **Notes:**

- **Best Practices:** Encourage the use of constructors to initialize objects, which will be covered in the next module.
- **Code Comments:** Solutions include comments for better understanding.

---

## **Next Steps:**

- Reflect on how classes and objects model real-world entities.
- Proceed to the **Encapsulation** module to learn about protecting object data.
- Experiment by modifying the code and observing the effects.

---

## **Additional Recommendations:**

- **Interactive Learning:** If possible, run the code examples and exercises to see them in action.
- **Peer Discussion:** Collaborate with peers to enhance understanding and solve challenges together.
- **Further Exploration:** Try creating classes for other entities like `Student`, `Employee`, or `Product`.

---

If you have any questions or need further clarification on any topic, feel free to reach out!

---