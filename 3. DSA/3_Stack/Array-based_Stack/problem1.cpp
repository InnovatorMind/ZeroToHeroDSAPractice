// Menu-Driven Stack using Array (No Classes, Pure Functions)

#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow! Cannot push " << value << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed into the stack." << endl;
    }
}

// Pop function
void pop() {
    if (top < 0) {
        cout << "Stack Underflow! Nothing to pop." << endl;
    } else {
        cout << stack[top] << " popped from the stack." << endl;
        top--;
    }
}

// Display function
void display() {
    if (top < 0) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;
    while (true) {
        cout << "\n--- Stack Operations Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
