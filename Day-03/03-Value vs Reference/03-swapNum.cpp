// Example of Swaping Number by function

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
}

int main () {
        int x = 10, y = 20;
        swapNumbers(x, y);
        cout << "x = " << x << ", y = " << y << endl;
        return 0;
}

// If you removed the & here, the swap would happen on copies inside the function and completely fail to affect x and y in main() — this exact mistake is one of the most common C++ interview trip-ups, so understanding why reference is required here (not just that it is) matters a lot.