// 10. Sort an array of strings alphabetically using insertion sort (same logic, just compare strings instead of ints — this tests whether you understand the algorithm, not just the specific int code)

#include <iostream>
#include <string>
using namespace std;

void printArray(string arr[], int size)
{
        cout << "arr[" << size << "] : {";
        for (int i = 0; i < size; i++)
        {
                cout << "\"" << arr[i] << "\"" << ",";
        }
        cout << "}" << endl;
}

void insertionSort(string arr[], int size)
{
        for (int i = 1; i < size; i++)
        {
                string key = arr[i];
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
        string arr[] = {"f", "d", "w", "a", "v", "z", "s"};
        int size = sizeof(arr) / sizeof(arr[0]);

        insertionSort(arr, size);
        return 0;
}