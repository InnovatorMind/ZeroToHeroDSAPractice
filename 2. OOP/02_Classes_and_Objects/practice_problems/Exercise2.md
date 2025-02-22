
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
