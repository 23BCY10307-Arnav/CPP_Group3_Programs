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