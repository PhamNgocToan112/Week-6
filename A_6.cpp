#include<iostream>

using namespace std;

int f(int n){
	int a[100];

	cout << n << endl;
	f(n  + 1);
}


int main(){
	int n = 1;
	
	f(n);
	
	
	
	// den 4625 thi tran bo nho
	return 0;
}
