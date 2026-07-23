// 2. Find the sum and average of all elements in an array

#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
        int result = 0;
        for (int i = 0; i < size; i++)
        {

                result += arr[i];
        }
        return result;
}

double average(int arr[], int size)
{

        double result = static_cast<double>(sum(arr, size)) / size;
        return result;
}

int main()
{
        int arr[5] = {1, 2, 5, 4, 5};
        int sumResult = sum(arr, 5);
        double averageResult = average(arr, 5);

        cout << "The sum of all elements in arr[]: " << sumResult << "." << endl;
        cout << "The average of all elements in arr[]: " << averageResult << "." << endl;

        return 0;
}
