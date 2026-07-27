// 3. Write bool linearSearchRecursive(int arr[], int size, int index, int target) — recursive version of linear search

#include <iostream>
using namespace std;

bool linearSearchRecursive(int arr[], int size, int index, int target)
{

        if (index >= size)
        {
                return false;
        }

        if (arr[index] == target)
        {
                return true;
        }

        return linearSearchRecursive(arr, size, index + 1, target);
}

int main()
{
        int arr[5] = {34, 45, 65, 77, 87};
        int size = 5;
        int target;
        cout << "Enter number to search: ";
        cin >> target;
        bool result = linearSearchRecursive(arr, size, 0, target);

        if (result)
        {
                cout << target << " is in arr[5]." << endl;
        }
        else
        {
                cout << target << " is not in arr[5]." << endl;
        }
        return 0;
}