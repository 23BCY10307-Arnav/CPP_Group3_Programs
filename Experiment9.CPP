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
