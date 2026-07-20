// 8. Take 2 numbers as input, print their sum, difference, product, and division

#include <iostream>
using namespace std;

int main() {
        int num_1;
        int num_2;

        cout << "Enter first number : ";
        cin >> num_1;
        cout << "Enter second number : ";
        cin >> num_2;

        cout << "The sum of " << num_1 << " and " << num_2 << " is " << (num_1 + num_2) << "." << endl;
        cout << "The difference of " << num_1 << " and " << num_2 << " is " << (num_1 - num_2) << "." << endl;
        cout << "The product of " << num_1 << " and " << num_2 << " is " << (num_1 * num_2) << "." << endl;
        cout << "The division of " << num_1 << " and " << num_2 << " is " << (static_cast<double>(num_1) / num_2) << "." << endl;

        return 0;
}