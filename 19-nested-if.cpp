#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n1, n2;
	n1 = 20;
	n2 = 10;
	
	if(n1 > 5 && n2 > 5){
		cout<<"Pakistan"<<endl;
	}
	
	if(n1 > 5){
		if(n2 > 5){
			cout<<"Pakistan"<<endl;
		}
	}
	
	if(n1 > 5 || n2 > 5){
		cout<<"Pakistan"<<endl;
	}
	
	if(n1 > 5){
		cout<<"Pakistan"<<endl;
	}else{
		if(n2 > 5){
			cout<<"Pakistan"<<endl;
		}
	}
	
	getch();
	return 0;
}

