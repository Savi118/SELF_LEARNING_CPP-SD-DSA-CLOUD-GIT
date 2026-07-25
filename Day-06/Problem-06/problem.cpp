// 6. Simple student record system
//    Combine everything: take n (number of students), then for each student take name, age, and 3 subject marks (use a 2D array or 3 parallel arrays). Compute each student's average. Print a formatted report, then print the name of the topper (highest average). This is the closest thing to a "mini project" you've built purely from today's review, no new syntax required.

#include <iostream>
#include <string>
using namespace std;

void studentInput(string s[], int a[], int m[100][3], int &n)
{
        cout << "How many students do you have?: ";
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
                cout << i + 1 << ":" << endl;
                cout << "Enter name: ";
                getline(cin, s[i]);
                cout << "Enter age: ";
                cin >> a[i];
                cin.ignore();
                cout << "Entering 3 marks for " << s[i] << ":" << endl;
                for (int j = 0; j < 3; j++)
                {
                        cout << "  Enter mark " << (j + 1) << ": ";
                        cin >> m[i][j];
                }

                cin.ignore();
        }
}

int totalMarks(int m[3])
{
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
                sum += m[j];
        }
        return sum;
}

double avg(int m[3])
{
        double result = static_cast<double>(totalMarks(m)) / 3;
        return result;
}

void reportCard(string s[], int a[], int m[100][3], int n)
{
        // Visualize the report card first
        // Name - student's name | Age - student's age
        // Marks : Subject 1 : mark | Subject 2 : mark | Subject 3 : mark
        // Total : total marks
        // Average : total average

        for (int i = 0; i < n; i++)
        {
                cout << "| Report Card |" << "\n"
                     << "------------------------------------------" << "\n"
                     << "Name : " << s[i] << " | Age : " << a[i] << "\n"
                     << "Marks: ";
                for (int j = 0; j < 3; j++)
                {
                        cout << "Subject " << j + 1 << " : " << m[i][j] << " | ";
                }
                cout << "\n"
                     << "Total : " << totalMarks(m[i]) << "\n"
                     << "Average : " << avg(m[i]) << "\n\n"
                     << "------------------------------------------" << endl;
        }
}

void printTopper(string s[], int m[100][3], int n)
{
        // Decide what we have to do first we need a loop for checking each student avg
        // After getting the average we will check which student index avg is bigger
        // After the loop end we will print topper
        double result;
        int topperIndex = 0;
        double maxAvg = avg(m[0]);
        for (int i = 1; i < n; i++)
        {
                double currentAvg = avg(m[i]);

                if (currentAvg > maxAvg)
                {
                        maxAvg = currentAvg;
                        topperIndex = i;
                }
        }
        cout << "Topper : " << s[topperIndex] << " | " << "Average :" << avg(m[topperIndex]);
}

int main()
{
        string student[100];
        int age[100];
        int marks[100][3];
        int studentNo = 0;

        studentInput(student, age, marks, studentNo);
        reportCard(student, age, marks, studentNo);
        if (studentNo != 0)
        {
                printTopper(student, marks, studentNo);
        }

        return 0;
}