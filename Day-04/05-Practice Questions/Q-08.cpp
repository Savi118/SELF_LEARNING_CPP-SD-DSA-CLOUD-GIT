// 8. Find the second-largest element in an array (don't sort — think through the logic with a single pass)

#include <iostream>
using namespace std;

int main()
{
        int arr[] = {445, 455, 763, 878, 887, 777};
        int size = sizeof(arr) / sizeof(arr[0]);

        int maxVal, maxVal2;
        if (arr[0] > arr[1])
        {
                maxVal = arr[0];
                maxVal2 = arr[1];
        }
        else
        {
                maxVal = arr[1];
                maxVal2 = arr[0];
        }

        for (int i = 2; i < size; i++)
        {
                if (arr[i] > maxVal)
                {
                        maxVal2 = maxVal;
                        maxVal = arr[i];
                }
                else if (arr[i] > maxVal2)
                {
                        maxVal2 = arr[i];
                }
        }

        cout << "Largest: " << maxVal << endl;
        cout << "Second largest: " << maxVal2 << endl;

        return 0;
}