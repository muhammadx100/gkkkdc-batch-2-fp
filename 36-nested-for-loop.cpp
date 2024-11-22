#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int row, col;

	for (row = 5; row > 0; row--){
		for(col = row; col > 0; col--){
			cout<<"*";
		}
		cout<<endl;
	}
}
