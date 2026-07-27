// 4. Write int countOccurrences(int arr[], int size, int index, int target) — recursively count how many times target appears in the array

#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int index, int target)
{
        int count = 0;
        if (index >= size)
        {
                return 0;
        }
        if (arr[index] == target)
        {
                count++;
        }

        return count + countOccurrences(arr, size, index + 1, target);
}


int main()
{
        int arr[] = {2, 2, 4, 5, 6};
        int size = sizeof(arr) / sizeof(arr[0]);
        int target;
        cout << "Enter number to find: ";
        cin >> target;

        cout << "The number " << target << " occured : " << countOccurrences(arr, size, 0, target) << endl;
        return 0;
}