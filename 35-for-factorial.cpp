#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, factorial = 1;
	cout<<"Please enter a number\n";
	cin>>num;
//	for(int index=num; index > 0; index--) {
//		factorial = factorial * index;
//	}
	for(int index=1; index <= num; index++) {
		factorial = factorial * index;
	}
	cout<<factorial;
	
	getch();
	
}
