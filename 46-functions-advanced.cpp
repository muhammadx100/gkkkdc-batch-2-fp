#include<iostream>
#include<conio.h>
using namespace std;

int Add(int ia, int ib){
	return ia + ib;
}
int Subtract(int ia, int ib){
	return ia - ib;
}
int Multiply(int ia, int ib){
	return ia * ib;
}

int Divide(int, int); // prototype

void PrintCalculations(int x, int y){
	int result = Add(x, y);
	cout<<"Sum: "<<result<<endl;
	cout<<"Diff: "<<Subtract(x, y)<<endl;
	cout<<"Product: "<<Multiply(x, y)<<endl;
	cout<<"Division: "<<Divide(x, y)<<endl;
}

int main(){
	int num1 = 30, num2 = 10;
	PrintCalculations(num1, num2);
	return 0;
}

int Divide(int ia, int ib){
	return ia/ib;
}
