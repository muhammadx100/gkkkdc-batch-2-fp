#include<iostream>
using namespace std;

int main(){
	int num1 = 10;
	int num2 = 23;
	cout<<"Num1: "<<num1<<endl;
	cout<<"Num2: "<<num2<<endl;
	 
	 num1 = num1 + num2; // 33
	 num2 = num1 - num2; // 10
	 num1 = num1 - num2; // 23 
	
	cout<<"Num1: "<<num1<<endl;
	cout<<"Num2: "<<num2;
			
}
