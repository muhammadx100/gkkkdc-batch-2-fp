#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int number, reverse = 0;

    cout<<"Please enter a number: ";
    cin>>number;

    while(number > 0){
        int digit = number % 10; 
        reverse = reverse * 10 + digit; 
        number = number / 10;
    }

    cout<<"Reversed number: "<<reverse;
	getch();
    return 0;
}

