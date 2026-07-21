// do-while loop — same as while, but guarantees the body runs at least once before checking the condition (useful for menus, retry prompts)

#include <iostream>
using namespace std;

int main()
{
        int choice;
        do
        {
                cout << "Enter 1 to continue, 0 to exit : ";
                cin >> choice;
        } while (choice != 0);

        return 0;
}