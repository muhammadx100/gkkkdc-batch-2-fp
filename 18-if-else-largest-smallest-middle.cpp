#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Please enter 3 different numbers.\n";
    cin >> n1 >> n2 >> n3;

    // Find the largest number
    if (n1 >= n2 && n1 >= n3) {
        cout << "The largest number is: " << n1 << "\n";
    } else if (n2 >= n1 && n2 >= n3) {
        cout << "The largest number is: " << n2 << "\n";
    } else {
        cout << "The largest number is: " << n3 << "\n";
    }

    // Find the smallest number
    if (n1 <= n2 && n1 <= n3) {
        cout << "The smallest number is: " << n1 << "\n";
    } else if (n2 <= n1 && n2 <= n3) {
        cout << "The smallest number is: " << n2 << "\n";
    } else {
        cout << "The smallest number is: " << n3 << "\n";
    }

    // Find the middle number
    if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)) {
        cout << "The middle number is: " << n1 << "\n";
    } else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)) {
        cout << "The middle number is: " << n2 << "\n";
    } else {
        cout << "The middle number is: " << n3 << "\n";
    }

    getch(); // Holds the screen
}

