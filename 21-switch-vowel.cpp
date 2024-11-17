#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char ch;
	cout<<"Please enter an alphabet\n";
	cin>>ch;
	
//	switch(ch){
//		case 'a':
//			cout<<"Vowel";
//			break;
//		case 'e':
//			cout<<"Vowel";
//			break;
//		case 'i':
//			cout<<"Vowel";
//			break;
//		case 'o':
//			cout<<"Vowel";
//			break;
//		case 'u':
//			cout<<"Vowel";
//			break;
//		default:
//			cout<<"Consonent";
//	}
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Vowel";
			break;
		default:
			cout<<"Consonent";
	}
	
	
	
	
	getch();
	return 0;
}
