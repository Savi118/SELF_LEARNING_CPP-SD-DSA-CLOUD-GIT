// 9. Simple Interest calculator — take Principal, Rate, Time as input, compute and print

#include <iostream>
using namespace std;

int main() {

        int principal;
        float rate;
        float time;

        cout << "Enter the principal : ";
        cin >> principal;
        cout << "Enter the rate of interest (yearly) : ";
        cin >> rate;
        cout << "Enter the time (in years) : ";
        cin >> time;

        double simpleInterest = (principal * rate * time)/100 ;

        cout << "The simple interest of Rs." << principal << " for " << rate << "% in " << time << " years is Rs." << simpleInterest << "." << endl;

        return 0;
}