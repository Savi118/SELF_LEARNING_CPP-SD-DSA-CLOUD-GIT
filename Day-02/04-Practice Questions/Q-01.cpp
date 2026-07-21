// 1. Check if a number is even or odd using %

#include <iostream>
using namespace std;

int main() {
        int n;
        cout << "This program tells that a number is odd or even." << endl;
        cout << "Enter any number : ";
        cin >> n;

        if (n % 2 != 0 ) {
                cout << n << " is odd." << endl;
        } else {
                cout << n << " is even." << endl;
        }

        return 0;
}