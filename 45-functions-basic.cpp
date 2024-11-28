#include<iostream>
#include<conio.h>
using namespace std;

int sum(int ia, int ib){
	int result = ia + ib;
	return result;
}

int main(){
	int a = 10, b = 20;
	int res = sum(a, b);
	cout<< res <<endl;
	
	res = sum(15, b);
	cout<< res <<endl;
	
	res = sum(30, 40);
	cout<< res <<endl;
	
	return 0;
}
