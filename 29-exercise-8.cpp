/*
Problem: Write a program that takes the temperature of water as input and uses if-else to 
determine its state:
o "Solid" if temperature = 0°C,
o "Liquid" if 0°C < temperature < 100°C,
o "Gas" if temperature = 100°C
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    double temperature;

    cout << "Enter the temperature of water in °C: ";
    cin >> temperature;

    if (temperature <= 0) {
        cout << "Solid" << endl;
    } else {
        if (temperature < 100) {
            cout << "Liquid" << endl;
        } else {
            cout << "Gas" << endl;
        }
    }

    getch();
    return 0;
}

