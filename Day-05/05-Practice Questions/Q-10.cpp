// 10. Take a sentence, and print each word on its own line (hint: use substr and find, or loop character by character and build words manually)

#include <iostream>
#include <string>
using namespace std;

void printWord(string s)
{
        string currentWord = "";
        for (char c : s)
        {
                if (c == ' ')
                {
                        if (currentWord != "")
                        {
                                cout << currentWord << endl;
                                currentWord = "";
                        }
                }
                else
                {
                        currentWord += c;
                }
        }

        if (currentWord != "")
        {
                cout << currentWord << endl;
        }
}

int main()
{
        string text;
        cout << "Enter text: ";
        getline(cin, text);

        printWord(text);
        return 0;
}