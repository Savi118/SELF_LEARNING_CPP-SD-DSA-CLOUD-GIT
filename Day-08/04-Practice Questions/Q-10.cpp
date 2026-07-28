// 10. Write int binarySearchRecursive(int arr[], int low, int high, int target) on a sorted array — return the index of target or -1. (This is a genuinely important one — binary search is one of the most-asked interview algorithms, and doing it recursively first will make the iterative version click faster later.)

#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int target)
{
        if (low > high)
        {
                return -1;
        }

        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
                return mid;
        }
        else if (arr[mid] < target)
        {
                return binarySearchRecursive(arr, mid + 1, high, target);
        }
        else
        {
                return binarySearchRecursive(arr, low, mid - 1, target);
        }
}

int main()
{
        int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
        int size = sizeof(arr) / sizeof(arr[0]);
        int target;
        cout << "Search for: ";
        cin >> target;

        cout << "The " << target << " found at arr[" << binarySearchRecursive(arr, 0, size - 1, target) << "]" << endl;
        return 0;
}
