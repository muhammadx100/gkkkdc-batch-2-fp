/*
Write a program that takes three integers as input, representing the lengths of a triangle's sides. Use 
if-else statements to determine and print the type of triangle:
• "Equilateral" if all sides are equal,
• "Isosceles" if exactly two sides are equal,
• "Scalene" if all sides are different
*/

#include<iostream>
#include<conio.h> 
using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "Equilateral" << endl;
    } else {
        if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "Isosceles" << endl;
        } else {
            cout << "Scalene" << endl;
        }
    }
    getch();
    return 0;
}

