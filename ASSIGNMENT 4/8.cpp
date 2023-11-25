#include <iostream>

class BubbleSort {
private:
    int* arr;
    int size;

public:
    // Constructor to initialize the array and size
    BubbleSort(int* inputArray, int arraySize) : size(arraySize) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArray[i];
        }
    }

    // Member function to perform bubble sort
    void performBubbleSort() {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
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
    ~BubbleSort() {
        delete[] arr;
    }
};

int main() {
    int unsortedArray[] = {64, 34, 25, 12, 22, 11, 90};

    // Create an object of the BubbleSort class
    BubbleSort bubbleSortObject(unsortedArray, sizeof(unsortedArray) / sizeof(unsortedArray[0]));

    // Perform bubble sort
    bubbleSortObject.performBubbleSort();

    // Display the sorted array
    bubbleSortObject.displaySortedArray();

    return 0;
}
