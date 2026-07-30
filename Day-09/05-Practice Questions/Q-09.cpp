// 9. Write a function void printArray(int arr[], int size) and call it after every pass (not just at the end) in bubble sort, so you can visually watch the array become sorted step by step — this will make the algorithm's behavior click much more concretely than a written trace

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
                for (int j = 0; j < (size - 1 - i); j++)
                {
                        if (arr[j] > arr[j + 1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }

                printArray(arr, size);
        }
}

int main()
{
        int arr[] = {5, 2, 4, 1};
        int size = sizeof(arr) / sizeof(arr[0]);

        bubbleSort(arr, size);
        return 0;
}