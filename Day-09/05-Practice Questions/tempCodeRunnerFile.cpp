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

void selectionSort(int arr[], int size)
{
        for (int i = 0; i < size - 1; i++)
        {
                int midIndex = i;
                for (int j = 1; j < size; j++)
                {
                        if (arr[j] > arr[midIndex])
                        {
                                midIndex = j;
                        }
                }
                int temp = arr[i];
                arr[i] = arr[midIndex];
                arr[midIndex] = temp;
        }

        printArray(arr, size);
}

int main()
{
        int arr[] = {5, 2, 4, 1};
        int size = sizeof(arr) / sizeof(arr[0]);

        selectionSort(arr, size);
        return 0;
}