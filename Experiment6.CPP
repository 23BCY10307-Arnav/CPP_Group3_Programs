// Create a class by name date with the member data day, month and year. Perform the following: 
// • Overload all relational operators <, <=, >, >=, ==, != 
// • Overload ++ operator to increment a date by one day 
// • Overload + to add given number of days to find the next date 
// • Provide the necessary function to use the statement like days=dt; where days is an int 
// variable and dt is an object of date class. The statement is intended to assign the number of days 
// elapsed in the current year of the date to the variable days. Note that this is a case of conversion 
// from derived type to basic type.  

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Display the date
    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }

    // Overload the '<' operator for comparison
    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }
// Overload the prefix '++' operator to increment the date by one day
    Date& operator++() {
        day++;
        if (day > 30) {  // Simplified assumption: each month has 30 days
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

int main() {
    int d, m, y, daysToAdd;
    cout << "Enter date (day month year): ";
    cin >> d >> m >> y;
    Date date(d, m, y);

    ++date;  // Increment by one day
    date.display();

    cout << "Enter number of days to add: ";
    cin >> daysToAdd;
    Date futureDate = date + daysToAdd;
    futureDate.display();

    int daysElapsed = date;  // Days elapsed in the current year
    cout << "Days elapsed in the current year: " << daysElapsed << endl;

    return 0;
}
