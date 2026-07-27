// 5. Write void printArrayReverse(int arr[], int size, int index) — print an array's elements back to front using recursion (think about whether you print before or after the recursive call, same reasoning as Day 7 drill #9)

#include <iostream>
using namespace std;

void printArrayReverse(int arr[], int size, int index)
{
        if (index >= size)
        {
                return;
        }

        printArrayReverse(arr, size, index + 1);
        cout << arr[index] << " ";
}

int main()
{
        int arr[] = {1,
                     3,
                     4,
                     5,
                     6,
                     7,
                     8,
                     9,
                     0,
                     0};
        int size = sizeof(arr) / sizeof(arr[0]);
        printArrayReverse(arr, size, 0);
        return 0;
}