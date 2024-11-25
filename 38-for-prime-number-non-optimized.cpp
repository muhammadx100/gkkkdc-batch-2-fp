#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int number, count = 0;
    

    cout<<"Please enter a number: ";
    cin>>number;

    for (int i = 1; i <= number; i++) { 
        if (number % i == 0) {
            count++;
        }
    }
    

    if (count == 2){ // if you want to declare 1 as prime number then use this check count == 1 || count == 2
        cout <<number<<" is a prime number." <<endl;
    }else{
        cout <<number<<" is not a prime number." <<endl;
	}
	getch();
    return 0;
}

