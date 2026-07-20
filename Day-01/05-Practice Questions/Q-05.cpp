// 5. Convert Celsius to Fahrenheit — take temp as input, print the converted value

#include <iostream>
using namespace std;

int main() {
        float tem_c;
        float tem_f;

        cout << "Enter the temperature (C) : ";
        cin >> tem_c;

        tem_f = (tem_c * 1.8) + 32;

        cout << tem_c << "C : " << tem_f << "f." << endl;

        return 0;
}