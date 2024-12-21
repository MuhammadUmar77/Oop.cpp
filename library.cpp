#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string Name;
    string Writter;
    int year;

public:
    Book(string n, string w, int y) {
        Name = n;
        Writter = w;
        year = y;
    }

    void show() const {
        cout << Name << "  " << Writter << " (" << year << ")" << endl;
    }
};
class Library {
private:
    Book book1;
    Book book2;

public:
    Library(Book b1, Book b2) : book1(b1), book2(b2) {}

    void showTheBook() const {
        cout << "Library Books: "<<endl;
        book1.show();
        book2.show();
    }
};
int main() {
    Book book1("Pride and Prejudice ", "Jane Austen", 1877);
    Book book2("The Great Gatsby", "F.Scott Fitzgerald ", 1920);

    Library library(book1, book2);

    library.showTheBook();

    return 0;
}