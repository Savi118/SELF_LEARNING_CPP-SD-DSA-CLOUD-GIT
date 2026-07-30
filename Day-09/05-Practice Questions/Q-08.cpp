// 8. Modify bubbleSort to add the early-exit optimization mentioned in 9.2 (track whether any swap happened in a pass; if not, break out of the outer loop early)

// 9.2 Optimization worth knowing:  if a full pass makes zero swaps, the array is already sorted — you can stop early. This turns bubble sort's best case (already-sorted input) into O(n) instead of O(n²). We won't implement this today, just know it exists.

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

void bubbleSort(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                int swapCount = 0;
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

                if (swapCount == 0)
                {
                        break;
                }
        }

        printArray(arr, size);
}

int main()
{
        int arr[] = {5, 2, 4, 1};
        int size = sizeof(arr) / sizeof(arr[0]);

        bubbleSort(arr, size);
        return 0;
}