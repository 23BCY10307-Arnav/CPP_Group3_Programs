// Develop a program to sort a file consisting of books’ details in the alphabetical order of author 
// names. 
// The details of books include book_id, author_name, price, no_of_pages, publisher, 
// year_of_publishing. 
#include <iostream>
#include <cstring>
using namespace std;

struct Book {
    int id;
    char authorName[50];
    double price;
    int pages;
    char publisher[50];
    int year;
};
void swapBooks(Book &a, Book &b) {
    Book temp = a;
    a = b;
    b = temp;
}

void sortBooks(Book books[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(books[i].authorName, books[j].authorName) > 0) {
                swapBooks(books[i], books[j]);
            }
        }
    }
}


int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    Book books[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        cout << "Book ID: ";
        cin >> books[i].id;
        cin.ignore();
        cout << "Author Name: ";
        cin.getline(books[i].authorName, 50);
        cout << "Price: ";
        cin >> books[i].price;
        cout << "Number of Pages: ";
        cin >> books[i].pages;
        cin.ignore();
        cout << "Publisher: ";
        cin.getline(books[i].publisher, 50);
        cout << "Year of Publishing: ";
        cin >> books[i].year;
        cin.ignore();
    }

    sortBooks(books, n);
    cout << "\nBooks sorted by author name:" << endl;
    displayBooks(books, n);

    return 0;
}

