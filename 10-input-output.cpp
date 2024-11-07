#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int age;
	char name[100];
	char gender;
	
	cout<<"Please enter your name: ";
//	cin>>name; // does not support spaces in string
	gets(name);
	cout<<"Please enter your age: ";
	cin>>age;
	cout<<"Please enter your gender (M/F): ";
	cin>>gender;
	
	cout<<"You have entered following information:\n";
//	cout<<"Name: "<<name<<endl;
	cout<<"Name: ";
	puts(name);
	cout<<"Age: "<<age<<endl;
	cout<<"Gender: "<<gender;
	
	
	
}
