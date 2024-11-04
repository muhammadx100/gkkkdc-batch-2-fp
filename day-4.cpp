#include<iostream>
using namespace std;

int main(){
	int n1 =  15;
	int n2 = 10;
	
	n1 = n1 + n2; // 15 + 10 = 25
	n2 = n1 - n2; // 25 - 10 = 15
	n1 = n1 - n2; // 25 - 15 = 10
	
	cout<<"n1 "<<n1<<endl;
	cout<<"n2 "<<n2<<endl;
	return 0;
			
}
