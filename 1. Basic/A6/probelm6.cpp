// Create a struct named Book with the following members:

// title (string)
// author (string)
// price (float)
// Add a member function displayInfo() that prints the details of the book.

#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    float price;

    // Member function to display book details
    void displayInfo() {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: $" << price << "\n";
    }
};

int main() {
    // Create an instance of Book
    Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 10.99};

    // Call the displayInfo function
    book1.displayInfo();

    return 0;
}
