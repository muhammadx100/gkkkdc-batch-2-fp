#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	int x = 10;
	int * ptr;
	
	ptr = &x;
	
	cout<< "Value of x: "<< *ptr <<endl;
	
	cout<<"Address of variable x in momory: "<< ptr <<endl;

	(*ptr)++; // increment in x through pointer

	cout<<"Value of x after increment: "<< x;
	
	return 0;
}
