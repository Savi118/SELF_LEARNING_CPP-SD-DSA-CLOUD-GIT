// 6. Convert a string to all uppercase, then all lowercase, without using any built-in "toUpperCase"-style whole-string function — loop and use toupper()/tolower() on each character

#include <iostream>
#include <string>
using namespace std;

string lowerCase(string &str)
{
        for (int i = 0; i < str.length(); i++)
        {
                str[i] = tolower(static_cast<unsigned char>(str[i]));
        }
        return str;
};
string upperCase(string &str)
{
        for (int i = 0; i < str.length(); i++)
        {
                str[i] = toupper(static_cast<unsigned char>(str[i]));
        }
        return str;
};

int main()
{
        string text;
        cout << "Enter any sentence: ";
        getline(cin, text);
        int choice;
        cout << "Enter 0 for lowercase and 1 for uppercase: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
        {
                lowerCase(text);
                cout << text << endl;
                break;
        }
        case 1:
        {
                upperCase(text);
                cout << text << endl;
                break;
        }
        default:
                cout << "Choice error: " << text << endl;
                break;
        }
        return 0;
}