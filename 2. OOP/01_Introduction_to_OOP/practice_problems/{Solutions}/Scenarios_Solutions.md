# Scenarios Solutions

---

## **Scenario 1: Smartphone Applications**

**Encapsulation:** Each app on a smartphone encapsulates its data and functions. For example, the messaging app manages messages and contacts internally without exposing the underlying data structures to other apps.

**Abstraction:** Users interact with apps through simple interfaces without needing to understand the complex code that makes them work. The camera app abstracts away the complexities of image processing, providing buttons and options for the user.

---

## **Scenario 2: Animal Classification**

**Inheritance:** You can create a base class `Animal` with common attributes like `age` and methods like `eat()`. Derived classes like `Mammal`, `Bird`, and `Reptile` inherit from `Animal` and add specific features.

**Polymorphism:** A function `describeAnimal(Animal a)` can accept any subclass of `Animal` and call overridden methods specific to `Mammal`, `Bird`, or `Reptile`.

---

## **Scenario 3: Online Shopping Cart**

**Classes and Objects:**

- **Items:** Represented by a class `Item` with attributes like `name`, `price`, `quantity`.
- **Cart:** An `Cart` class that contains a list of `Item` objects and methods to add or remove items.
- **Transactions:** A `Transaction` class to process payments.

Each object represents a real-world entity in the shopping process.

---

## **Scenario 4: Payment Processing**

**Polymorphism:** A base class `PaymentMethod` defines a method `processPayment()`. Subclasses like `CreditCard`, `PayPal`, and `BankTransfer` override this method to implement specific payment processing logic.

When processing a payment, the system can call `processPayment()` on a `PaymentMethod` object without needing to know the specific subclass, thanks to polymorphism.

---

