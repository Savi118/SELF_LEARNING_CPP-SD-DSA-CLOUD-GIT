// 5. Count the number of words in a sentence (hint: count spaces, or better, count transitions from space to non-space)

#include <iostream>
#include <string>
using namespace std;

int wordCount(string str)
{
        int count = 0;
        bool wasSpace = true;
        for (char x : str)
        {
                if (x != ' ')
                {
                        if (wasSpace)
                        {
                                count++;
                        }
                        wasSpace = false;
                }
                else
                {
                        wasSpace = true;
                }
        }
        return count;
}

int main()
{
        string sentence;
        cout << "Enter any sentence: ";
        getline(cin, sentence);

        int count = wordCount(sentence);

        cout << "No of Words in '" << sentence << "' : " << count << endl;
        return 0;
}