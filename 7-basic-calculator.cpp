#include<iostream>
using namespace std;

int main(){
	int num1, num2, result;
	cout<<"\t\tBASIC CALCULATOR\n";	
//	cout<<"Please enter two numbers:\n";
//	cin>>num1>>num2;

	cout<<"Please enter first number: ";
	cin>>num1;
	cout<<"Please enter second number: ";
	cin>>num2;
	result =  num1 + num2;
	cout<<num1<<" Jama "<<num2<<" ye barabar ha "<<result<<endl;
	cout<<num1<<" Jama "<<num2<<" ye barabar ha "<< num1 + num2<<endl;
	result = num1 - num2;
	cout<<num1<<" - "<<num2<<" = "<<result<<endl;
	result = num2 * num1;
	cout<<num2<<" x "<<num1<<" = "<<result<<endl;
	
	result = num1 / num2;
	cout<<num1<<" / "<<num2<<" = "<<result;
	
	
	
}
