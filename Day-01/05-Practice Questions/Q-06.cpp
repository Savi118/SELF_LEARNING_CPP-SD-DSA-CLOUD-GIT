// 6. Calculate area of a rectangle — take length & width as input

#include <iostream>
using namespace std;

int main() {

        int len;
        int wid;
        
        cout << "Enter the length (cm) : ";
        cin >> len;
        
        cout << "Enter the width (cm) : ";
        cin >> wid;
        
        int area = len * wid;


        cout << "The area of a rectangle whose length " << len << "cm and width " << wid << "cm is " << area << "cm2." << endl;

        return 0;
}