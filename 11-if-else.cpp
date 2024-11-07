#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int age;
	char name[100];
	char gender;
	
	cout<<"Please enter your name: ";
	cin>>name; // does not support spaces in string
	cout<<"Please enter your age: ";
	cin>>age;
	cout<<"Please enter your gender (M/F): ";
	cin>>gender;
	if(age > 18){
		cout<<"Welcome\n";
		cout<<"You have entered following information:\n";
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Gender: "<<gender;
	}
	if(age < 18){
		cout<<"Sorry, You are not eligible.";
	}
	

	
	
	
}
