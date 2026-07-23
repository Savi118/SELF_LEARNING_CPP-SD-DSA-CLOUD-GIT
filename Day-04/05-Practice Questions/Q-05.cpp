// 5. Count how many even and how many odd numbers are in an array

#include <iostream>
using namespace std;

int main()
{

        int arr[] = {12, 34, 56, 77, 88, 99, 43, 55, 67, 76, 87, 98};
        int size = sizeof(arr) / sizeof(arr[0]);

        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < size; i++)
        {

                if (arr[i] % 2 == 0)
                {
                        evenCount++;
                }
                else
                {
                        oddCount++;
                }
        }

        cout << "Even : " << evenCount << endl;
        cout << "Odd : " << oddCount << endl;
        return 0;
}