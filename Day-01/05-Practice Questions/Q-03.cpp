// 3. Take user input for name and age using cin, print them back in a sentence.

#include <iostream>
using namespace std;

int main() {
        string name;
        int age;


        cout << "Enter your name : ";
        cin >> name;

        cout << "Enter your age : ";
        cin >> age;

        cout << "Hi, My name is " << name << " and I am " << age << " years old." << endl;

        return 0;
}