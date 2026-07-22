// 3. Write a function void printStars(int n) that prints n stars in a line (no return value)

#include <iostream>
using namespace std;

void printStars(int n) {
        for (int i = 1; i <= n; i++) {
                cout<< '*'; 
        }
}

int main() {
        int n;
        cout << "Enter any number: ";
        cin >> n;

        printStars(n);
        return 0;
}