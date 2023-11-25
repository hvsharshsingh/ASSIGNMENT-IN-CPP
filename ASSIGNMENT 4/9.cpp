#include <iostream>

class SelectionSort {
private:
    int* arr;
    int size;

public:
    // Constructor to initialize the array and size
    SelectionSort(int* inputArray, int arraySize) : size(arraySize) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArray[i];
        }
    }

    // Member function to perform selection sort
    void performSelectionSort() {
        for (int i = 0; i < size - 1; ++i) {
            // Find the minimum element in the unsorted part of the array
            int minIndex = i;
            for (int j = i + 1; j < size; ++j) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap the found minimum element with the first element
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
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
    ~SelectionSort() {
        delete[] arr;
    }
};

int main() {
    int unsortedArray[] = {64, 25, 12, 22, 11};

    // Create an object of the SelectionSort class
    SelectionSort selectionSortObject(unsortedArray, sizeof(unsortedArray) / sizeof(unsortedArray[0]));

    // Perform selection sort
    selectionSortObject.performSelectionSort();

    // Display the sorted array
    selectionSortObject.displaySortedArray();

    return 0;
}
