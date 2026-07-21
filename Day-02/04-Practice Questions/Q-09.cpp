// 9. Print a right-angled triangle pattern of stars using nested loops:
// *
// **
// ***
// ****

#include <iostream>
using namespace std;

int main() {
        char s = '*';

        for (int i = 1; i <= 4; i++) {
                for (int j = 1; j <= i; j++) {
                        cout << s;
                }
                cout << endl;
        }

        return 0;
}