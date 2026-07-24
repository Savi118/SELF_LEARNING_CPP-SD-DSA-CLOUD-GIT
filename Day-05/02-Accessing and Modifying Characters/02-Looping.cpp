// Looping through a string (identical pattern to array loops)

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string word = "hello";
        for (int i = 0; i < word.length(); i++)
        {
                cout << word[i] << " ";
        }
        return 0;
}