/*
Problem: Write a program to calculate an electricity bill based on the following rates:
o First 100 units: Rs 25 per unit,
o Next 200 units: Rs 50 per unit,
o Above 300 units: Rs 75 per unit.
• Use if-else to calculate the total bill based on the units consumed, and print the total.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int units;
    double totalBill;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100) {
        totalBill = units * 25;
    } else {
        if (units <= 300) {
            totalBill = (100 * 25) + ((units - 100) * 50);
        } else {
            totalBill = (100 * 25) + (200 * 50) + ((units - 300) * 75);
        }
    }

    cout << "Total electricity bill: Rs " << totalBill << endl;

    getch();
    return 0;
}

