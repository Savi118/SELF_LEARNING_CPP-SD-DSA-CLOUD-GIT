// Finding max recursively:

#include <iostream>
using namespace std;

int maxArray(int arr[], int size, int index)
{
        if (index == size - 1) // base case: last element, nothing to compare
        {
                return arr[index];
        }

        int maxOfRest = maxArray(arr, size, index + 1); // trust this returns max of everything after index
        return (arr[index] > maxOfRest) ? arr[index] : maxOfRest;
}

// Trace of index =
// Size - 5
// 1st call - if (0 == 4) false -> maxOfRest = 2nd Call;
// 2nd call - if (1 == 4) false -> maxOfRest = 3rd Call;
// 3rd call - if (2 == 4) false -> maxOfRest = 4th call;
// 4th call - if (3 == 4) false -> maxOfRest = 5th call;
// 5th call - if ( 4 == 4) true -> it return arr[4] = 5;
// 4th call - maxOfRest => arr[4] -> now it check return (arr[3] > arr[4]) false -> arr[4]
// 3rd call - maxOfRest => arr[4] -> now it check return (arr[2] > arr[4]) false -> arr[4]
// 2nd call - maxOfRest => arr[4] -> now it check return (arr[1] > arr[4]) false -> arr[4]
// 1st call - maxOfRest => arr[4] -> now it check return (arr[0] > arr[4]) false -> arr[4]

int main()
{
        int arr[] = {1, 2, 3, 4, 5};
        int size = sizeof(arr) / sizeof(arr[0]);
        cout << maxArray(arr, size, 0) << endl;
        return 0;
}