// 5. Print numbers 1 to N using a for loop

#include <iostream>
using namespace std;

int main() {
        int n;
        cout << "Enter the number you want print to that no : ";
        cin >> n;

        for (int i = 1; i <= n; i++ ) {
                cout << i << " " << endl;
        }

        return 0;
}