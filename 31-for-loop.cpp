#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	for(int index = -10; index < 10; index++){
		cout<<index<<": Pakistan\n";
		if(index % 3 == 0){
			index = index + 1;	
		}
		
		
	}
	
	getch();
	return 0;
}
