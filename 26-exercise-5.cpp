/*
Problem: Write a program that takes the user's weight (in kg) and height (in meters) as input and 
calculates their BMI using the formula:
BMI = weight / height^2
Use if-else to classify the result:
 "Underweight" if BMI < 18.5,
 "Normal weight" if 18.5 = BMI < 25,
 "Overweight" if 25 = BMI < 30,
 "Obese" if BMI = 30
*/

#include<iostream>
#include<conio.h>
#include<iomanip> // For fixed and setprecision
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter your weight (in kg): ";
    cin >> weight;

    cout << "Enter your height (in meters): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << fixed << setprecision(2); // Format BMI to 2 decimal places
    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else {
        if (bmi < 25) {
            cout << "Normal weight" << endl;
        } else {
            if (bmi < 30) {
                cout << "Overweight" << endl;
            } else {
                cout << "Obese" << endl;
            }
        }
    }

    getch();
    return 0;
}

