// 7. Reverse a number using a loop (e.g., 123 → 321) — no strings allowed, pure math

#include <iostream>
using namespace std;

int main() {
        int num;
        cout << "Enter any number : ";
        cin >> num;

        int rev = 0;
        do
        {
                int temp = num % 10;
                num = num / 10;
                rev = (rev * 10) + temp ; 
        } while (num > 0);
        
        cout << rev << endl;
        return 0;

}