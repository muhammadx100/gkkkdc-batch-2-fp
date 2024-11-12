#include<iostream>
using namespace std;

int main(){
	/* Conditional Operators
		- 'Equal to' represented by ==
		- 'Greater than' represented by >
		- 'Less than' represented by <
		- 'Greater than OR Equal to' represented by >=
		- 'Less than OR Equal to' represented by <=
		- 'Not Equal to' represented by !=
	*/
	int n1, n2;
	n1 = 20;
	n2 = 10;
	
	if(n1 == n2){
		cout<<"N1 is equal to N2"<<endl;
	}
	if(n1 > n2){
		cout<<"N1 is greater than N2"<<endl;
	}
	if(n1 < n2){
		cout<<"N1 is less than N2"<<endl;
	}
	if(n1 != n2){
		cout<<"N1 is not equal to N2"<<endl;
	}
	if(n1 >= n2){
		cout<<"N1 is greater than or equal to N2"<<endl;
	}
	if(n1 <= n2){
		cout<<"N1 is less than or equal to N2"<<endl;
	}
}
