// 3. Check if a string is a palindrome (reads the same forwards and backwards) — e.g., "madam"

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalidrome(string str)
{
        // After making the correct method we will do make a proper function here
        int size = str.length();
        bool result = true;
        for (int i = 0; i < size / 2; i++)
        {
                int j = size - 1 - i;
                char left = tolower(static_cast<unsigned char>(str[i]));
                char right = tolower(static_cast<unsigned char>(str[j]));
                if (left != right)
                {
                        result = false;
                        break;
                }
        }
        return result;
}

int main()
{
        string text;
        cout << "Enter any word: ";
        cin >> text;

        bool result = isPalidrome(text);

        if (result)
        {
                cout << text << " is palidrome." << endl;
        }
        else
        {
                cout << text << " is not palidrome." << endl;
        }
        return 0;
}