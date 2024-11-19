#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int table;
	cout<<"Please enter a number: ";
	cin>>table;
	
	for(int index = 1; index <=10; index++){
		cout<<table<<" x "<<index<< " = "<<table*index<<endl;
	}
	
	getch();
	return 0;
}
