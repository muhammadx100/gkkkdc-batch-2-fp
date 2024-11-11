#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Please enter a number\n";
	cin>>num;
	int remainder;
	remainder = num % 2;
	if(remainder == 0){
		cout<<"You have entered Even number";
	}
	if(remainder == 1){
		cout<<"You have entered Odd number";
	}
}
