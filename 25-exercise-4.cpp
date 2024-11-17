/*
Write a program that takes an integer as input, representing a year. Use if-else statements to check if 
the year is a leap year. Print "Leap year" if it is, otherwise print "Not a leap year."
• Hint: A year is a leap year if it is divisible by 4, but not by 100, except if it is also divisible by 
400.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Leap year" << endl;
            } else {
                cout << "Not a leap year" << endl;
            }
        } else {
            cout << "Leap year" << endl;
        }
    } else {
        cout << "Not a leap year" << endl;
    }

    getch();
    return 0;
}

