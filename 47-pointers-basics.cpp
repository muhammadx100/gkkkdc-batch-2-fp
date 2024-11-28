#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	int x = 10;
	int * ptr;
	
	ptr = &x;
	cout<< *ptr << endl;
	
	(*ptr)++;
	cout<<x;
	
	return 0;
}
