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

// Function Prototypes
void bubbleSort(int arr[], int size);

int main() {
    int arrSize;
    cout << "Enter the number of elements you want to sort: ";
    cin >> arrSize;

    int* arr = new int[arrSize];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, arrSize);

    cout << "Sorted elements: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

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

    cout << "Number of comparisons: " << numComparisons << endl;
    cout << "Number of swaps: " << numSwaps << endl;
}
