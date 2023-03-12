// DeMario Russell 
// CIS - 251 C++
// 03/10/2023
// HW - Swap Algorithm
//

#include <iostream>
#include <string>

using namespace std;

// Function/Method Declaration - START
void bubbleSort(int arr[], int arrSize);
// define function/method declaration signatures between the two markers
// Function/Method Declaration - END

int main() {
    // get user input for array elements
    int arrSize;
    cout << "Enter the number of elements in the array: ";
    cin >> arrSize;

    int* arr = new int[arrSize];
    for (int i = 0; i < arrSize; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // sort the array numerically using bubble sort
    bubbleSort(arr, arrSize);

    // print the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // deallocate the dynamically allocated array
    delete[] arr;

    return 0;  // indicate successful program execution
}

// Function/Method Definition - START
void bubbleSort(int arr[], int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// define function/method definitions between the two markers
// Function/Method Definition - END
