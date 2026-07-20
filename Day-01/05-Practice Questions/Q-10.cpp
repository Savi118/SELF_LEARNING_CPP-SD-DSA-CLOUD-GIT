// 10. Take a person's name and GPA, print a formatted one-line summary

#include <iostream>
using namespace std;

int main() {
        string name;
        string university;
        float gpaCurr;
        float gpaTotal = 10.0;

        cout << "Enter student's name : ";
        cin >> name;

        cout << "Enter university's name : ";
        cin >> university;

        cout << "Enter student's GPA : ";
        cin >> gpaCurr;

        cout << name << " : [" << gpaCurr << "/" << gpaTotal << "]" << " | " << university << endl;
        
        return 0;

}