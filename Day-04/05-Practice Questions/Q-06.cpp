// 6. Write a function int linearSearch(int arr[], int size, int target) that returns the index of target, or -1 if not found

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
        int foundIndex = -1;
        for (int i = 0; i < size; i++)
        {
                if (arr[i] == target)
                {
                        foundIndex = i;
                        break;
                }
        }

        return foundIndex;
}

int main()
{
        int arr[] = {23, 45, 65, 76, 77, 87, 34, 54};
        int size = sizeof(arr) / sizeof(arr[0]);
        int target;
        cout << "Enter the number you want to search: ";
        cin >> target;

        int result = linearSearch(arr, size, target);

        if (result != -1)
        {
                cout << "Found at index " << result << endl;
        }
        else
        {
                cout << "Not found" << endl;
        }
        return 0;
}