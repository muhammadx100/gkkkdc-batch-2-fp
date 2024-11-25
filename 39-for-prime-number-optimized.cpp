#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int number;
    bool is_prime = true;

    cout<<"Please enter a number: ";
    cin>>number;

    if(number < 1){
        is_prime = false;
    } else if (number <= 2) {
        is_prime = true; // i am not sure if we can declare 1 as prime number
    } else if (number % 2 == 0) {
        is_prime = false; 
    } else {
        for (int i = 3; i <= number/2; i += 2) { 
            if (number % i == 0) {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime){
        cout <<number<<" is a prime number." <<endl;
    }else{
        cout <<number<<" is not a prime number." <<endl;
	}
	getch();
    return 0;
}

