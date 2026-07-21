// 10. Print a multiplication table (1 to 10) for a user-input number using a for loop.

#include <iostream>
using namespace std;

int main() {
        int n;
        cout << "Enter any number : ";
        cin >> n;

        for (int i = 1; i <= 10; i++) {
                cout << n << " x " << i << " = " << n * i << endl;
        }
        return 0;
}