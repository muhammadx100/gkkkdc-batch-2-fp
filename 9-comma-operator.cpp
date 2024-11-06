#include<iostream>
using namespace std;

int main(){
	int n1, n2;
//	n2 = 5;
//	n1 = n2 + 3;
//	n1 = n2 + 4;

	n1 = (n2 = 5, n2 + 3, n2 + 4);
	cout<<n1;	
}
