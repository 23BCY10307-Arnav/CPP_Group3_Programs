// Design a generic function for finding the largest of three numbers. 
#include <iostream>
using namespace std;

template <typename T>
T largestOfThree(T a, T b, T c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int intA, intB, intC;
    cout << "Enter three integers: ";
    cin >> intA >> intB >> intC;
    cout << "Largest of " << intA << ", " << intB << ", " << intC << ": " << largestOfThree(intA, intB, intC) << endl;

    double doubleA, doubleB, doubleC;
    cout << "Enter three doubles: ";
    cin >> doubleA >> doubleB >> doubleC;
    cout << "Largest of " << doubleA << ", " << doubleB << ", " << doubleC << ": " << largestOfThree(doubleA, doubleB, doubleC) << endl;

    char charA, charB, charC;
    cout << "Enter three characters: ";
    cin >> charA >> charB >> charC;
    cout << "Largest of '" << charA << "', '" << charB << "', '" << charC << "': " << largestOfThree(charA, charB, charC) << endl;

    return 0;
}
