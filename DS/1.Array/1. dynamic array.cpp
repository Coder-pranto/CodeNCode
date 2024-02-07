#include <iostream>
using namespace std;

int main() {
    int *array = new int[5];
    int size = 0;  // Variable to keep track of the current size of the array

    // Insert an element
    array[size] = 10;
    size++;

    // Insert another element
    array[size] = 20;
    size++;

    // Print the elements
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Search for an element
    int searchValue = 20;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (array[i] == searchValue) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    // Delete an element (assuming the element to be deleted is at index 1)
    int deleteIndex = 1;
    if (deleteIndex >= 0 && deleteIndex < size) {
        for (int i = deleteIndex; i < size - 1; i++) {
            array[i] = array[i + 1];
        }
        size--;
        cout << "Element deleted!" << endl;
    } else {
        cout << "Invalid index for deletion!" << endl;
    }

    // Print the updated array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Don't forget to deallocate the memory
    delete[] array;

    return 0;
}
