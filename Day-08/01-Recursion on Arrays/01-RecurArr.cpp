// Recursion on Arrays
// The same "base case + recursive case, shrink the problem each time" idea applies directly to arrays — just shrink by moving an index forward instead of decrementing a number.

#include <iostream>
using namespace std;

int sumArray(int arr[], int size, int index)
{
        if (index >= size) // Base case: gone past the last element
        {
                return 0;
        }

        return arr[index] + sumArray(arr, size, index + 1); // Recursive Case
}

int main()
{
        int arr[] = {1, 2, 3, 4, 5};
        int size = sizeof(arr) / sizeof(arr[0]);
        cout << sumArray(arr, size, 0) << endl;
        return 0;
}

// Instead of shrinking n toward 0 (like factorial), we're growing index toward size — same core idea, "make the problem smaller and trust the smaller version," just applied differently.
// Whichever direction naturally shrinks the remaining work is the right one for a given problem.
