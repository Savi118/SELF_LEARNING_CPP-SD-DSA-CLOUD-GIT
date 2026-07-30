// 3. Implement insertionSort from scratch, test on the same array


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
        int arr[] = {5, 2, 4, 1};
        int size = sizeof(arr) / sizeof(arr[0]);

        insertionSort(arr, size);
        return 0;
}