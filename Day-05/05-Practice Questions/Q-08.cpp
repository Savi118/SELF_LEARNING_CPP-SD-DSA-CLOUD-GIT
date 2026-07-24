// 8. Find and print the first non-repeating character in a string — e.g., in "swiss", the answer is 'w'

#include <iostream>
#include <string>
using namespace std;

char nonRepeatedChar(string str)
{
        int strIndex[26] = {};

        for (int i = 0; i < str.length(); i++)
        {
                char c = tolower(static_cast<unsigned char>(str[i]));
                strIndex[c - 'a']++;
        }

        for (int i = 0; i < str.length(); i++)
        {
                char c = tolower(static_cast<unsigned char>(str[i]));
                if (strIndex[c - 'a'] == 1)
                {
                        return str[i];
                }
        }

        return '0';
}

int main()
{
        string str;
        cout << "Enter any text: ";
        cin >> str;

        char result = nonRepeatedChar(str);

        if (result != '0')
        {
                cout << result << endl;
        }
        else
        {
                cout << "no non-repeating character found" << endl;
        }

        return 0;
}