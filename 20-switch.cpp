#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n1;
	cout<<"Please enter a number between 1 and 5\n";
	cin>>n1;
	
//	if(n1 >= 1 && n1 <= 5){
//		if(n1 == 1){
//			cout<<"You have entered ONE\n";
//		}
//		if(n1 == 2){
//			cout<<"You have entered TWO\n";
//		}
//		if(n1 == 3){
//			cout<<"You have entered THREE\n";
//		}
//		if(n1 == 4){
//			cout<<"You have entered FOUR\n";
//		}
//		if(n1 == 5){
//			cout<<"You have entered FIVE\n";
//		}		
//		
//	}else{
//		cout<<"You have entered wrong number";
//	}
	cout<<"Your input is ";
	switch(n1){
			case 1:
				cout<<"ONE\n";
				break;
			case 3:
				cout<<"THREE\n";
				break;
			case 2:
				cout<<"TWO\n";
				break;
			case 4:
				cout<<"FOUR\n";
				break;
			case 5:
				cout<<"FIVE\n";
				break;
			default:
				cout<<"wrong number";
		}
	
	
	
	
	getch();
	return 0;
}
