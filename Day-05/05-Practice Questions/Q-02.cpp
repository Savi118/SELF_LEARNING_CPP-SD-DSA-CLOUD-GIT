// 2. Count the number of vowels in a string

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int vowelCount(string str)
{
        int count = 0;
        string vowels = "aeiou";
        for (char c : str)
        {
                char lower_c = tolower(static_cast<unsigned char>(c));

                if (vowels.find(lower_c) != string::npos)
                {
                        count++;
                }
        }
        return count;
}

int main()
{
        string text;
        cout << "Type any sentence or word: ";
        getline(cin, text);

        cout << "Vowel Count: " << vowelCount(text) << endl;
        return 0;
}