#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int n, a = 0, b = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    int count = 1; 
    while (count <= n) {
        cout << a << " ";
        nextTerm = a + b; 
        a = b;            
        b = nextTerm;     
        count++;
    }

    cout << endl;
    getch();
    return 0;
}

