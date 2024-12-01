#include<iostream>
#include<conio.h>
using namespace std;

void calculate(int a, int b, int *pt1, int * pt2){
	*pt1 = a + b;
	*pt2 = a - b;
}

int main(){
	int n1 = 20, n2 = 5;
	int sum, diff;
	int* sum_ptr = &sum;
	int* diff_ptr = &diff;
	
	calculate(n1, n2, sum_ptr, diff_ptr);
	
	cout<<"Sum: "<< sum << endl;
	cout<<"Difference: "<< diff <<endl<<endl;
	
	calculate(100, n2, &sum, &diff); // passing addresses directly to function
	cout<<"Sum: "<< sum << endl;
	cout<<"Difference: "<< diff <<endl;
		
	return 0;
}
