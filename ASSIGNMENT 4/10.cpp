#include <iostream>

class InsertionSort {
private:
    int* arr;
    int size;

public:
    // Constructor to initialize the array and size
    InsertionSort(int* inputArray, int arraySize) : size(arraySize) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArray[i];
        }
    }

    // Member function to perform insertion sort
    void performInsertionSort() {
        for (int i = 1; i < size; ++i) {
            int key = arr[i];
            int j = i - 1;

            // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    }

    // Member function to display the sorted array
    void displaySortedArray() const {
        std::cout << "Sorted Array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    // Destructor to free memory
    ~InsertionSort() {
        delete[] arr;
    }
};

int main() {
    int unsortedArray[] = {12, 11, 13, 5, 6};

    // Create an object of the InsertionSort class
    InsertionSort insertionSortObject(unsortedArray, sizeof(unsortedArray) / sizeof(unsortedArray[0]));

    // Perform insertion sort
    insertionSortObject.performInsertionSort();

    // Display the sorted array
    insertionSortObject.displaySortedArray();

    return 0;
}
