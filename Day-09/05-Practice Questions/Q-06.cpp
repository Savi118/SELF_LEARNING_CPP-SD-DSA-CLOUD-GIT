// 6. Test all three on an already-sorted array (e.g., {1,2,3,4,5}) with your counters from #4/#5 — which algorithm does noticeably less work on already-sorted input?

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
        int arr[] = {1, 2, 3, 4, 5};
        int size = sizeof(arr) / sizeof(arr[0]);
        int comparisonBubble = 0;
        int comparisonSelection = 0;
        int comparisonInsertion = 0;

        cout << "The bubble sort did : " << bubbleSortCompare(arr, size, comparisonBubble) << " comparisons and " << bubbleSortSwaps(arr, size) << " swaps." << endl;
        cout << "The selection sort did : " << selectionSortCompare(arr, size, comparisonSelection) << " comparisons and " << selectionSortSwaps(arr, size) << " swaps." << endl;
        cout << "The insertion sort did : " << insertionSortCompare(arr, size, comparisonInsertion) << " comparisons and " << insertionSortSwaps(arr, size) << " swaps." << endl;

        return 0;
}