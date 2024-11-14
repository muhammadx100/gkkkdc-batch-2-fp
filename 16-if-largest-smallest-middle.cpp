#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n1,n2,n3;
	cout<<"Please enter 3 different numbers\n";
	cin>>n1>>n2>>n3;
	
	// Find the largest number
	if(n1 > n2 && n1 > n3){
		cout<<n1<<" is the largest number.\n";
	}
	if(n2 > n1 && n2 > n3){
		cout<<n2<<" is the largest number.\n";
	}
	if(n3 > n1 && n3 > n1){
		cout<<n3<<" is the largest number.\n";
	}
	
	// Find the Smallest number
	if(n1 < n2 && n1 < n3){
		cout<<n1<<" is the smallest number.\n";
	}
	if(n2 < n1 && n2 < n3){
		cout<<n2<<" is the smallest number.\n";
	}
	if(n3 < n1 && n3 < n1){
		cout<<n3<<" is the smallest number.\n";
	}
	
	// Find the middle number
	if( (n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3) ){
		cout<<n1<<" is the middle number.\n";
	}
	if( (n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3) ){
		cout<<n2<<" is the middle number.\n";
	}
	if( (n3 > n1 && n3 < n2) || (n3 < n1 && n3 > n2) ){
		cout<<n3<<" is the middle number.\n";
	}
	
	getch(); // it holds the screen
}
