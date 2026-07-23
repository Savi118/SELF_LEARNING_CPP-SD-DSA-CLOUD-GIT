// 4. Reverse an array in place (swap first with last, second with second-last, etc. — no second array allowed)

#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
        for (int i = 0; i < size / 2; i++)
        {
                int temp = arr[i];
                int j = size - 1 - i;
                arr[i] = arr[j];
                arr[j] = temp;
        }
}

int main()
{
        int arr[5] = {1, 2, 3, 4, 5};

        for (int i = 0; i < 5; i++)
        {
                cout << "Before reverse : arr[" << i << "] = " << arr[i] << endl;
        }
        reverse(arr, 5);

        for (int i = 0; i < 5; i++)
        {
                cout << "After reverse : arr[" << i << "] = " << arr[i] << endl;
        }
        return 0;
}