// Design a class template by name Vector and perform the following: 
// • Find the smallest of the element in the Vector. 
// • Search for an element in the Vector. 
// • Find the average of the element in the array. 
 int searchElement(T element) {
        for (int i = 0; i < size; i++) {
            if (elements[i] == element) {
                return i;
            }
        }
        return -1; // Element not found
    }
