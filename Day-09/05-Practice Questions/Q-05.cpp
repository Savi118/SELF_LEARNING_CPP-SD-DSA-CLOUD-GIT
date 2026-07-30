// 5. Add a comparison counter to all three — print total comparisons for the same input. Which does the fewest comparisons?

#include <iostream>
using namespace std;

int bubbleSort(int arr[], int size, int &comparisonBubble)
{
        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < (size - 1 - i); j++)
                {
                        comparisonBubble++;
                        if (arr[j] > arr[j + 1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }
        return comparisonBubble;
}

int selectionSort(int arr[], int size, int &comparisonSelection)
{

        for (int i = 0; i < size - 1; i++)
        {
                int midIndex = i;
                for (int j = i + 1; j < size; j++)
                {
                        comparisonSelection++;
                        if (arr[j] < arr[midIndex])
                        {
                                midIndex = j;
                        }
                }
                if (midIndex != i)
                {
                        int temp = arr[i];
                        arr[i] = arr[midIndex];
                        arr[midIndex] = temp;
                }
        }
        return comparisonSelection;
}

int insertionSort(int arr[], int size, int &comparisonInsertion)
{
        for (int i = 1; i < size; i++)
        {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key)
                {
                        arr[j + 1] = arr[j];
                        j--;
                        comparisonInsertion++;
                }
                arr[j + 1] = key;
        }
        return comparisonInsertion;
}

int main()
{
        int arr1[] = {5, 2, 4, 1};
        int arr2[] = {5, 2, 4, 1};
        int arr3[] = {5, 2, 4, 1};
        int size = sizeof(arr1) / sizeof(arr1[0]);
        int comparisonBubble = 0;
        int comparisonSelection = 0;
        int comparisonInsertion = 0;

        cout << "The bubble sort did : " << bubbleSort(arr1, size, comparisonBubble) << " comparisons." << endl;
        cout << "The selection sort did : " << selectionSort(arr2, size, comparisonSelection) << " comparisons." << endl;
        cout << "The insertion sort did : " << insertionSort(arr3, size, comparisonInsertion) << " comparisons." << endl;

        return 0;
}