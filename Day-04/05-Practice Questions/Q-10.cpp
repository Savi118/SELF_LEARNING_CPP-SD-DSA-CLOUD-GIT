// 10. Take a sentence's worth of numbers (say, exam scores) into an array, and print how many students scored above the average

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

void inputArray(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                cout << "Enter [" << i << "]: ";
                cin >> arr[i];
        }
}

void printArray(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                cout << "arr[" << i << "] = " << arr[i] << endl;
        }
}

int main()
{
        int arr[15];
        inputArray(arr, 15);
        printArray(arr, 15);
        double avg = average(arr, 15);
        int abvAvg = 0;
        for (int i = 0; i < 15; i++)
        {
                if (arr[i] > avg)
                {
                        abvAvg++;
                }
        }

        cout << abvAvg << " students scored more than average." << endl;
        return 0;
}