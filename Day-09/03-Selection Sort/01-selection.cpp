// Selection Sort
// Instead of swapping adjacent elements repeatedly, find the minimum of the unsorted portion and swap it into its correct position — one swap per pass, not many.

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                cout << "arr[" << i << "] = " << arr[i] << endl;
        }
}
// Key difference from bubble sort:
// Selection sort does far fewer swaps (at most n-1 swaps total, vs. potentially many in bubble sort), but the same number of comparisons.
// This matters in real scenarios where writing/swapping is expensive (e.g., swapping large objects) but comparing is cheap.


void selectionSort(int arr[], int size)
{
        for (int i = 0; i < size - 1; i++)
        {
                int minIndex = i;
                for (int j = i + 1; j < size; j++)
                {
                        if (arr[j] < arr[minIndex])
                        {
                                minIndex = j;
                        }
                }
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
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
        selectionSort(arr, size);
        return 0;
}