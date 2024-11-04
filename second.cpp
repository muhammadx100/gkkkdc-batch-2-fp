#include<iostream>
using namespace std;

int main(){
	int n1, n2 = 10;
	int n3 = n1 - n2;	
	n1 = n2 = n3 + n1;
	n3 = n1 + n2 - n1;
	
	cout<<"n1 "<<n1<<endl;
	cout<<"n2 "<<n2<<endl;
	cout<<"n3 "<<n3<<endl;
	return 0;
			
}
