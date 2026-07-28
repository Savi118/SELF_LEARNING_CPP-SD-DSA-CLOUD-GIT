// Bubble Sort
// Repeatedly compare adjacent pairs, swap if out of order.
// Each full pass "bubbles" the largest unsorted element to its correct position at the end.

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                cout << "arr[" << i << "] = " << arr[i] << endl;
        }
}
void bubbleSort(int arr[], int size)
{

        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < size - 1 - i; j++)
                {
                        if (arr[j] > arr[j + 1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }
        printArray(arr, size);
}

// Let's trace this for better understanding
/*  arr[] = {1,4,5,7,2,7,6,3}; size = 8; -> i will go till 7;
 i = 0 -> j will go till 6 (j > (8-1-0)) ->
        - j = 0 -> (arr[0] > arr[0+1]) -> (1 > 4) => false => {1,4,5,7,2,7,6,3} -> No Swap
        - j = 1 -> (arr[1] > arr[1+1]) -> (4 > 5) => false => {1,4,5,7,2,7,6,3} -> No Swap
        - j = 2 -> (arr[2] > arr[2+1]) -> (5 > 7) => false => {1,4,5,7,2,7,6,3} -> No Swap
        - j = 3 -> (arr[3] > arr[3+1]) -> (7 > 2) => true => {1,4,5,2,7,7,6,3} -> Swap
        - j = 4 -> (arr[4] > arr[4+1]) -> (7 > 7) => false => {1,4,5,2,7,7,6,3} -> No Swap
        - j = 5 -> (arr[5] > arr[5+1]) -> (7 > 6) => true => {1,4,5,2,7,6,7,3} -> Swap
        - j = 6 -> (arr[6] > arr[6+1]) -> (7 > 3) => true => {1,4,5,2,7,6,3,7} -> Swap

 i = 1 -> j will go till 5 (j > (8-1-1)) ->
        - j = 0 -> (arr[0] > arr[0+1]) -> (1 > 4) => false => {1,4,5,2,7,6,3,7} -> No Swap
        - j = 1 -> (arr[1] > arr[1+1]) -> (4 > 5) => false => {1,4,5,2,7,6,3,7} -> No Swap
        - j = 2 -> (arr[2] > arr[2+1]) -> (5 > 2) => true => {1,4,2,5,7,6,3,7} -> Swap
        - j = 3 -> (arr[3] > arr[3+1]) -> (5 > 7) => false => {1,4,2,5,7,6,3,7} -> No Swap
        - j = 4 -> (arr[4] > arr[4+1]) -> (7 > 6) => true => {1,4,2,5,6,7,3,7} -> Swap
        - j = 5 -> (arr[5] > arr[5+1]) -> (7 > 3) => true => {1,4,2,5,6,3,7,7} -> SwapX

i = 2 -> j will go till 4 (j > (8-1-2)) ->
        - j = 0 -> (arr[0] > arr[0+1]) -> (1 > 4) => false => {1,4,2,5,6,3,7,7} -> No Swap
        - j = 1 -> (arr[1] > arr[1+1]) -> (4 > 2) => true => {1,2,4,5,6,3,7,7} -> Swap
        - j = 2 -> (arr[2] > arr[2+1]) -> (4 > 5) => false => {1,2,4,5,6,3,7,7} -> No Swap
        - j = 3 -> (arr[3] > arr[3+1]) -> (5 > 6) => false => {1,2,4,5,6,3,7,7} -> No Swap
        - j = 4 -> (arr[4] > arr[4+1]) -> (6 > 3) => true => {1,2,4,5,3,6,7,7} -> Swap

 i = 3 -> j will go till 3 (j > (8-1-3)) ->
        - j = 0 -> (arr[0] > arr[0+1]) -> (1 > 2) => false => {1,2,4,5,3,6,7,7} -> No Swap
        - j = 1 -> (arr[1] > arr[1+1]) -> (2 > 4) => false => {1,2,4,5,3,6,7,7} -> No Swap
        - j = 2 -> (arr[2] > arr[2+1]) -> (4 > 5) => false => {1,2,4,5,3,6,7,7} -> No Swap
        - j = 3 -> (arr[3] > arr[3+1]) -> (5 > 3) => true => {1,2,4,3,5,6,7,7} -> Swap

 i = 4 -> j will go till 2 (j > (8-1-4)) ->
        - j = 0 -> (arr[0] > arr[0+1]) -> (1 > 2) => false => {1,2,4,3,5,6,7,7} -> No Swap
        - j = 1 -> (arr[1] > arr[1+1]) -> (2 > 4) => false => {1,2,4,3,5,6,7,7} -> No Swap
        - j = 2 -> (arr[2] > arr[2+1]) -> (4 > 3) => true => {1,2,3,4,5,6,7,7} -> Swap

 i = 5 -> j will go till 1 (j > (8-1-5)) ->
        - j = 0 -> (arr[0] > arr[0+1]) -> (1 > 2) => false => {1,2,3,4,5,6,7,7} -> No Swap
        - j = 1 -> (arr[1] > arr[1+1]) -> (2 > 3) => false => {1,2,3,4,5,6,7,7} -> No Swap


 i = 6 -> j will go till 0 (j > (8-1-6)) ->
        - j = 0 -> (arr[0] > arr[0+1]) -> (1 > 2) => false => {1,2,3,4,5,6,7,7} -> No Swap

 i = 7 -> j will not run (j > (8-1-7)) ->
        it will just run and it would end the program

        This is how O(n^2) solutions work and it is time consuming if the number of size increases the solution goes 
*/ 

// Notice size - 1 - i in the inner loop — as i increases, we need to check fewer elements each pass, since the last i elements are already correctly placed from previous passes. This is a real efficiency detail, not decoration.
// 


int main()
{
        int arr[] = {
            1,
            4,
            5,
            7,
            2,
            7,
            6,
            3};
        int size = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, size);
        return 0;
}

