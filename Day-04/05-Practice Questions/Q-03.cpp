// 3. Find the largest and smallest element in an array (two separate tracked variables)

#include <iostream>
using namespace std;

int large(int arr[], int size)
{
        int maxVal = arr[0];
        for (int i = 1; i < size; i++)
        {
                if (arr[i] > maxVal)
                {
                        maxVal = arr[i];
                }
        }
        return maxVal;
}

int small(int arr[], int size)
{
        int minVal = arr[0];
        for (int i = 1; i < size; i++)
        {
                if (arr[i] < minVal)
                {
                        minVal = arr[i];
                }
        }
        return minVal;
}

int main()
{
        int arr[6] = {445, 455, 763, 878, 887, 777};

        int maxVal = large(arr, 6);
        int minVal = small(arr, 6);

        cout << "Largest : " << maxVal << endl;
        cout << "Smallest : " << minVal << endl;

        return 0;
}