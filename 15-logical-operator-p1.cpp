#include<iostream>
using namespace std;

int main(){
	/* Logical Operators
		- && (Logical AND): Returns true if both operands are true.
		- || (Logical OR): Returns true if at least one operand is true.
		- ! (Logical NOT): Inverts the value of the operand; returns true if operand is false.
	*/
	int n1, n2;
	n1 = 10;
	n2 = 20;

    if (n1 > 5 && n2 < 25) {
        cout << "Both conditions are true (using &&)." << endl;
    }
    
    if (n1 < 5 && n2 < 25) {
        cout << "The program wont print this" << endl;
    }else{
    	// n1 < 5 is false, hence it came here because && requires all conditions to be true.
    	cout << "At least one of the conditions is false." << endl;	
	}

    if (n1 < 15 || n2 > 30) {
    	// n1 < 15 is true, but n2 > 30 is not true (false)
        cout << "At least one condition is true (using ||)." << endl;
    }

    return 0;
}
