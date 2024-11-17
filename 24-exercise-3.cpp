/*
Write a program that takes an integer representing a month (1 for January, 2 for February, etc.). Use 
if-else statements to print the number of days in that month, assuming it’s a non-leap year.
• For example, February has 28 days, April has 30 days, etc.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int month;

    cout << "Enter the month number (1 for January, 2 for February, etc.): ";
    cin >> month;

    if (month == 2) {
        cout << "28 days" << endl;
    } else {
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            cout << "30 days" << endl;
        } else {
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                cout << "31 days" << endl;
            } else {
                cout << "Invalid month" << endl;
            }
        }
    }

    getch();
    return 0;
}

