/*
Problem: Write a program that takes the coefficients a, b, and c of a quadratic equation 
ax^2 + bx + c = 0. Use if-else to:
o Calculate the discriminant D = b^2 - 4ac,
o Print:
   ? "Real and distinct roots" if D > 0,
   ? "Real and equal roots" if D = 0,
   ? "Complex roots" if D < 0
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    double a, b, c, discriminant;

    cout << "Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0): " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        cout << "Real and distinct roots" << endl;
    } else {
        if (discriminant == 0) {
            cout << "Real and equal roots" << endl;
        } else {
            cout << "Complex roots" << endl;
        }
    }

    getch();
    return 0;
}

