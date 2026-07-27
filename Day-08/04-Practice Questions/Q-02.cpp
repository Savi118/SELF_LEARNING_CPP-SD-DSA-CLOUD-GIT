// 2. Write int maxArray(int arr[], int size, int index) recursively

#include <iostream>
using namespace std;

int maxArray(int arr[], int size, int index)
{
        if (index == size - 1)
        {
                return arr[index];
        }

        int maxOfRest = maxArray(arr, size, index + 1);
        return (arr[index] > maxOfRest) ? arr[index] : maxOfRest;
}

int main()
{
        int arr[5] = {1, 2, 3, 4, 5};
        int size = 5;
        cout << "The max in arr[] : " << maxArray(arr, size, 0);
        return 0;
}