// 3. Matrix (2D array) row/column sums
//    Declare a 3x3 array of integers, take all 9 values as input using nested loops. Print the sum of each row and the sum of each column. (This is your first taste of 2D arrays — a natural extension of what you already know: an array of arrays.)

//   |- int matrix[3][3];
//   |- for (int i = 0; i < 3; i++) {
//   |- for (int j = 0; j < 3; j++) {
//   |- cin >> matrix[i][j];
//   |- }
//   |- }

#include <iostream>
#include <string>
using namespace std;

void matrixInput(int arr[3][3])
{
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        cout << "Enter matrix input : ";
                        cin >> arr[i][j];
                }
        }
        cout << endl;
}

void printMatrix(int arr[3][3])
{
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        cout << arr[i][j] << " ";
                }
                cout << endl;
        }
}

void rowSum(int arr[3][3])
{
        for (int i = 0; i < 3; i++)
        {
                int sum = 0;
                for (int j = 0; j < 3; j++)
                {
                        sum += arr[i][j];
                }
                cout << "Row " << i << " sum: " << sum << endl;
        }
}

void colSum(int arr[3][3])
{
        for (int j = 0; j < 3; j++)
        {
                int sum = 0;
                for (int i = 0; i < 3; i++)
                {
                        sum += arr[i][j];
                }
                cout << "Column " << j << " sum: " << sum << endl;
        }
}

int main()
{
        int matrix[3][3];
        matrixInput(matrix);
        printMatrix(matrix);
        rowSum(matrix);

        colSum(matrix);

        return 0;
}