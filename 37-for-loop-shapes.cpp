#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int row;
	cout<<"Please enter number of rows: ";
	cin>>row;
	for(int r=0; r < row; r++){
		for(int sp = 0; sp < r; sp++){
			cout<<" ";
		}
		for(int str=0; str < row - r; str++){
			cout<<"*";
		}
		cout<<endl;
	}
	
}
