// Exercise1_Solution.cpp

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
public:
    Book(const string &t, const string &a) : title(t), author(a) {}

    // Friend function to overload <<
    friend ostream& operator<<(ostream &os, const Book &book);
};

ostream& operator<<(ostream &os, const Book &book) {
    os << "Title: " << book.title << ", Author: " << book.author;
    return os;
}

int main() {
    Book myBook("1984", "George Orwell");
    cout << myBook << endl;
    return 0;
}
