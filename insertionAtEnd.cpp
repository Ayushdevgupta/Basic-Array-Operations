#include<iostream>
using namespace std;

int* insertAtEnd(int arr[], int size, int val, int& cap) {
    // Check if the array is full and needs resizing
    if (size == cap) {
        // Double the capacity (you can adjust the resizing strategy based on your requirements)
        cap *= 2;

        // Allocate new memory
        int* newArr = new int[cap];

        // Copy elements from the old array to the new array
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        // Insert the new value at the end
        newArr[size] = val;

        // Free the memory of the old array
        delete[] arr;

        // Return the new array
        return newArr;
    }

    // If the array is not full, simply insert the value at the end
    arr[size] = val;

    // Increment the size of the array
    size++;

    return arr;
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main() {
    int* a = new int[5];
    int size = 0;
    int cap = 5;

    // Insert elements into the dynamic array
    a = insertAtEnd(a, size, 5, cap);
    size++;
    a = insertAtEnd(a, size, 10, cap);
    size++;
    a = insertAtEnd(a, size, 20, cap);
    size++;

    // Print the array
    print(a, size);

    // Insert an element at the end
    a = insertAtEnd(a, size, 7, cap);
    size++;

    // Print the updated array
    print(a, size);

    // Don't forget to free the allocated memory
    delete[] a;

    return 0;
}

