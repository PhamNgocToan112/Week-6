#include<iostream>

using namespace std;

//long long F(int n) {
//	if (n == 0) return 0;
//	if (n == 1) return 1;
//	return F(n - 1) + F(n - 2);
//}

int main() {
	int n = 20;
//	cout <<	F(n) << endl;
	
	 long long a , a2 = 1, a1 = 1;
	for(int i = 3; i <= n; i++){
		a = a1 + a2; 
		a1 = a2;
		a2 = a;
	}
	
	cout << a;	
	
	// nhan thay dung vong lap nhanh hon

	return 0;
}	
