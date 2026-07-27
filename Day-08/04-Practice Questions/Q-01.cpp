// 1. Write int sumArray(int arr[], int size, int index) from scratch (the example above), test with a 5-element array

#include <iostream>
using namespace std;

int sumArray(int arr[], int size, int index)
{
        if (index >= size)
        {
                return 0;
        }

        return arr[index] + sumArray(arr, size, index + 1);
}

int main()
{
        int arr[5] = {1, 2, 3, 4, 5};
        int size = 5;
        cout << sumArray(arr, size, 0) << endl;
        return 0;
}
