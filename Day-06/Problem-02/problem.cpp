// 2. Grade report generator
//    Take n students' names (array of strings) and their marks (array of ints) as input. Print each student's name, their marks, and their letter grade (reuse Day 2's grading logic as a function). At the end, print the class average and who scored above it.

#include <iostream>
#include <string>
using namespace std;

void inputStudent(string s[], int m[], int &n)
{
        cout << "How many students data you have?: ";
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
                cout << i + 1 << ":" << endl;
                cout << "Enter name: ";
                getline(cin, s[i]);
                cout << "Enter marks: ";
                cin >> m[i];
                cin.ignore();
        }
}

int sum(int m[], int size)
{
        int result = 0;
        for (int i = 0; i < size; i++)
        {
                result += m[i];
        }
        return result;
}

double avg(int m[], int size)
{
        return static_cast<double>(sum(m, size)) / size;
}

bool isAboveAverage(int marks, double avg)
{
        return marks > avg;
}

char getGrade(int marks)
{
        if (marks >= 80)
        {
                return 'A';
        }
        else if (marks >= 60)
        {
                return 'B';
        }
        else if (marks >= 50)
        {
                return 'C';
        }
        else if (marks >= 35)
        {
                return 'D';
        }
        else
        {
                return 'F';
        }
}

void printReport(string s[], int m[], int n)
{
        double average = avg(m, n);
        for (int i = 0; i < n; i++)
        {
                cout << "name: " << s[i] << ", marks: " << m[i] << ", grade: " << getGrade(m[i]) << endl;
        }

        cout << "Marks Average: " << average << endl;
        cout << "Above Average: [";
        for (int i = 0; i < n; i++)
        {

                if (isAboveAverage(m[i], average))
                {
                        cout << s[i] << ",";
                }
        }
        cout << " ]" << endl;
}

int main()
{
        string students[100];
        int marks[100];
        int studentNumber = 0;
        inputStudent(students, marks, studentNumber);
        printReport(students, marks, studentNumber);

        return 0;
}