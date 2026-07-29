// 4. Add a swap counter to all three (a variable incremented every time a swap happens) — print the total swaps for the same input array across all three algorithms and compare the numbers. Which does the fewest swaps?

// 3. Implement insertionSort from scratch, test on the same array

// 2. Implement selectionSort from scratch, test on the same array

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
        cout << "arr[" << size << "] : {";
        for (int i = 0; i < size; i++)
        {
                cout << arr[i] << ",";
        }
        cout << "}" << endl;
}

int bubbleSort(int arr[], int size)
{
        int swapCount = 0;
        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < (size - 1 - i); j++)
                {
                        if (arr[j] > arr[j + 1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                                swapCount++;
                        }
                }
        }
        return swapCount;
}

int selectionSort(int arr[], int size)
{
        int swapCount = 0;
        for (int i = 0; i < size - 1; i++)
        {
                int midIndex = i;
                for (int j = i + 1; j < size; j++)
                {
                        if (arr[j] < arr[midIndex])
                        {
                                midIndex = j;
                        }
                }
                if (midIndex != i)
                {
                        int temp = arr[i];
                        arr[i] = arr[midIndex];
                        arr[midIndex] = temp;
                        swapCount++;
                }
        }
        return swapCount;
}

int insertionSort(int arr[], int size)
{
        int swapCount = 0;
        for (int i = 1; i < size; i++)
        {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key)
                {
                        arr[j + 1] = arr[j];
                        j--;
                        swapCount++;
                }
                arr[j + 1] = key;
        }
        return swapCount;
}

int main()
{
        int arr1[] = {5, 2, 4, 1};
        int arr2[] = {5, 2, 4, 1};
        int arr3[] = {5, 2, 4, 1};
        int size = sizeof(arr1) / sizeof(arr1[0]);

        cout << "The bubble sort did : " << bubbleSort(arr1, size) << " swaps." << endl;
        cout << "The selection sort did : " << selectionSort(arr2, size) << " swaps." << endl;
        cout << "The insertion sort did : " << insertionSort(arr3, size) << " swaps." << endl;

        return 0;
}