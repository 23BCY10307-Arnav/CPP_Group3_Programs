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
int main() {
    Vector<int> vec;
    int n, element;

    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        vec.addElement(element);
    }

    cout << "Smallest element: " << vec.smallestElement() << endl;
    cout << "Enter element to search: ";
    cin >> element;
    int index = vec.searchElement(element);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    cout << "Average of elements: " << vec.averageElement() << endl;

    cout << "Vector elements: ";
    vec.display();

    return 0;
}
