/*
Write a program that takes an integer as input, representing a student’s marks (out of 100). Use if-else 
statements to print the corresponding grade:
• "A" for marks 90 and above,
• "B" for marks 80 to 89,
• "C" for marks 70 to 79,
• "D" for marks 60 to 69,
• "E" for marks 50 to 59,
• "Fail" for marks below 50.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int marks;

    cout << "Enter the marks (out of 100): ";
    cin >> marks;

    if (marks >= 90) {
        cout << "A" << endl;
    } else {
        if (marks >= 80) {
            cout << "B" << endl;
        } else {
            if (marks >= 70) {
                cout << "C" << endl;
            } else {
                if (marks >= 60) {
                    cout << "D" << endl;
                } else {
                    if (marks >= 50) {
                        cout << "E" << endl;
                    } else {
                        cout << "Fail" << endl;
                    }
                }
            }
        }
    }
    getch();
    return 0;
}

