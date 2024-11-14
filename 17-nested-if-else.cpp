#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n1,n2,n3;
	cout<<"Please enter 3 numbers\n";
	cin>>n1>>n2>>n3;
	n1 = 20; n2 = 30, n3 = 10;
	if(n1 > n2 && n1 > n3){
		cout<<"n1 is the largest number";
	}else{
		if(n2 > n1 && n2 > n3){
			cout<<"n2 is the largest number";
		}else{
			if(n3 > n2 && n3 > n1){
				cout<<"n3 is the largest number";
			}	
		}		
	}
	
	
	
	
	
}
