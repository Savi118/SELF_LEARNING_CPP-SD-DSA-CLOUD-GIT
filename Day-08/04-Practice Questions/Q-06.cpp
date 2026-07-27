// 6. Write bool isSorted(int arr[], int size, int index) — recursively check if an array is sorted in ascending order

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size, int index)
{
        if (index >= size - 1)
        {
                return true;
        }

        if (arr[index] > arr[index + 1])
        {
                return false;
        }

        return isSorted(arr, size, index + 1);
}

int main()
{
        int arr[5] = {34, 45, 65, 77, 87};
        int size = 5;
        bool result = isSorted(arr, size, 0);

        if (result)
        {
                cout << "Array is sorted." << endl;
        }
        else
        {
                cout << "Array isn't sorted." << endl;
        }
        return 0;
}