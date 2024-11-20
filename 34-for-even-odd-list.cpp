#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	cout<<"List of all Even numbers from 0 to 100\n\n";
	for(int index = 0; index <= 100; index++){
		if(index % 2 == 0){
			cout<<index<<"\t";
		}
	}
	cout<<endl<<endl;	
	
	cout<<"List of all Odd numbers from 0 to 100\n\n";
	for(int index = 0; index <= 100; index++){
		if(index % 2 != 0){
			cout<<index<<"\t";
		}
	}
	getch();
	
}
