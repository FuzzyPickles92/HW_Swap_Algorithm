// DeMario Russell 
// CIS - 251 C++
// 03/10/2023
// HW - Swap Algorithm
//

#include <iostream>

using namespace std;

// Variables
int temp;
int numComparisons = 0;
int numSwaps = 0;

// Function/Method Declaration - START
void bubbleSort(int arr[], int size);
// define function/method declaration signatures between the two markers
// Function/Method Declaration - END
int main() {
    int arrSize; // get user input for array elements
    cout << "Enter the number of elements you want to sort: ";
    cin >> arrSize;

    int* arr = new int[arrSize];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
    // sort the array numerically using bubble sort
    bubbleSort(arr, arrSize);
    // print the sorted array
    cout << "Sorted elements: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // deallocate the allocated array
    delete[] arr;

    return 0; // indicate successful program execution
}
// Function/Method Definition - START
void bubbleSort(int arr[], int size) {
    bool swapped = true;
    int j = 0;

    while (swapped) {
        swapped = false;
        j++;
        for (int i = 0; i < size - j; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
                numSwaps++;
            }
            numComparisons++;
        }
    }
    // define function/method definitions between the two markers
// Function/Method Definition - END
    cout << "Number of comparisons: " << numComparisons << endl;
    cout << "Number of swaps: " << numSwaps << endl;
}
