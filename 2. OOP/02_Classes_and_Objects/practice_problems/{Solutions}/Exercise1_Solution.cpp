
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


