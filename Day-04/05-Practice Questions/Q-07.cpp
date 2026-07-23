// 7. Write a function void printArray(int arr[], int size) and reuse it across multiple drills below instead of rewriting the print loop each time

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                cout << "arr[" << i << "] = " << arr[i] << endl;
        }
}

int main()
{
        int arr[] = {
            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
        };
        int size = sizeof(arr) / sizeof(arr[0]);

        printArray(arr, size);
        return 0;
}