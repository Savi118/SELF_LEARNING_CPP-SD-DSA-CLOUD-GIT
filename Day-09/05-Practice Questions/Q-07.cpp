// 7. Test all three on a reverse-sorted array (e.g., {5,4,3,2,1}) — this is usually each algorithm's worst case. Compare counts.

#include <iostream>
using namespace std;

int bubbleSortCompare(int arr[], int size, int &comparisonBubble)
{
        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < (size - 1 - i); j++)
                {
                        comparisonBubble++;
                        if (arr[j] > arr[j + 1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }
        return comparisonBubble;
}

int selectionSortCompare(int arr[], int size, int &comparisonSelection)
{

        for (int i = 0; i < size - 1; i++)
        {
                int midIndex = i;
                for (int j = i + 1; j < size; j++)
                {
                        comparisonSelection++;
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
                }
        }
        return comparisonSelection;
}

int insertionSortCompare(int arr[], int size, int &comparisonInsertion)
{
        for (int i = 1; i < size; i++)
        {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key)
                {
                        arr[j + 1] = arr[j];
                        j--;
                        comparisonInsertion++;
                }
                arr[j + 1] = key;
        }
        return comparisonInsertion;
}

int bubbleSortSwaps(int arr[], int size)
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

int selectionSortSwaps(int arr[], int size)
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

int insertionSortSwaps(int arr[], int size)
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
        int arr1a[] = {5, 4, 3, 2, 1};
        int arr1b[] = {5, 4, 3, 2, 1};
        int arr2a[] = {5, 4, 3, 2, 1};
        int arr2b[] = {5, 4, 3, 2, 1};
        int arr3a[] = {5, 4, 3, 2, 1};
        int arr3b[] = {5, 4, 3, 2, 1};
        int size = sizeof(arr1a) / sizeof(arr1a[0]);
        int comparisonBubble = 0;
        int comparisonSelection = 0;
        int comparisonInsertion = 0;

        cout << "The bubble sort did : " << bubbleSortCompare(arr1a, size, comparisonBubble) << " comparisons and " << bubbleSortSwaps(arr1b, size) << " swaps." << endl;
        cout << "The selection sort did : " << selectionSortCompare(arr2a, size, comparisonSelection) << " comparisons and " << selectionSortSwaps(arr2b, size) << " swaps." << endl;
        cout << "The insertion sort did : " << insertionSortCompare(arr3a, size, comparisonInsertion) << " comparisons and " << insertionSortSwaps(arr3b, size) << " swaps." << endl;

        return 0;
}