// Relational Operators - > | < | == | != | <= | >= |
// Relational Operators always returns bool - true(1)/false(0)
// = is used for assign variable to identifiers and for checking equal to we use ==.

#include <iostream>
using namespace std;

int main() {
        int a = 10, b = 3;

        cout << (a > b) << endl;        // is a bigger than b?
        cout << (a < b) << endl;        // is a smaller than b?
        cout << (a == b) << endl;       // is a equal to b?
        cout << (a != b) << endl;       // is a not equal to b?
        cout << (a >= b) << endl;       // is a bigger or equal to b?
        cout << (a <= b) << endl;       // is a smaller or equal to b?

        return 0;
}