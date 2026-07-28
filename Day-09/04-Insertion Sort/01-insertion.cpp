// Insertion Sort
// Build up a sorted portion one element at a time, inserting each new element into its correct position within the already-sorted part — like how you'd sort playing cards in your hand.

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                cout << "arr[" << i << "] = " << arr[i] << endl;
        }
}

void insertionSort(int arr[], int size)
{
        for (int i = 1; i < size; i++)
        {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key)
                {
                        arr[j + 1] = arr[j];
                        j--;
                }
                arr[j + 1] = key;
        }
        printArray(arr, size);
}

int main()
{
        int arr[] = {
            1,
            4,
            5,
            7,
            2,
            7,
            6,
            3};
        int size = sizeof(arr) / sizeof(arr[0]);
        insertionSort(arr, size);
        return 0;
}