// 9. Write a function that takes an array and doubles every element in place using pass-by-reference-style array modification (like the example above)

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                cout << "arr[" << i << "] = " << arr[i] << endl;
        }
}

void doubleIt(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                arr[i] = arr[i] * 2;
        }
}

int main()
{
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        int size = sizeof(arr) / sizeof(arr[0]);

        printArray(arr, size);
        doubleIt(arr, size);
        printArray(arr, size);

        return 0;
}