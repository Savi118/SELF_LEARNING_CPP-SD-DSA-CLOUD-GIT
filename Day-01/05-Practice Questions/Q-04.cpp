// 4. Swap two numbers using a temporary third variable

#include <iostream>
using namespace std;

int main() {

        int num_1 = 10;
        int num_2 = 12;

        cout << "Before swapping - num-1 is " << num_1 << " and num-2 is " << num_2 << endl; 
        
        int temp = num_1;
        num_1 = num_2;
        num_2 = temp;

        cout << "After swapping - num-1 is " << num_1 << " and num-2 is " << num_2 << endl;

        return 0;
}