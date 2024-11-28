#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n = 0;
	
	glass:
		cout<<"Pakistan\n";
		n++;
		if(n < 10){
			goto glass;
		}
		
		return 0;
}
