/*
Problem: Write a program that takes the price of an item and calculates the discount based 
on these conditions:
o If the price is less than Rs 100, no discount.
o If Rs 100 = price < Rs 500, apply a 10% discount.
o If Rs 500 = price < Rs 1000, apply a 20% discount.
o If price = Rs 1000, apply a 30% discount.
• Print the original price, discount amount, and final price.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    double price, discount = 0, finalPrice;

    cout << "Enter the price of the item: Rs ";
    cin >> price;

    if (price < 100) {
        discount = 0;
    } else {
        if (price < 500) {
            discount = price * 0.10;
        } else {
            if (price < 1000) {
                discount = price * 0.20;
            } else {
                discount = price * 0.30;
            }
        }
    }

    finalPrice = price - discount;

    cout << "Original Price: Rs " << price << endl;
    cout << "Discount Amount: Rs " << discount << endl;
    cout << "Final Price: Rs " << finalPrice << endl;

    getch();
    return 0;
}

