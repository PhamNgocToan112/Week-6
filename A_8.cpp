#include<iostream>

using namespace std;

int a[200];
int k;

void display(int n){
	cout << "[";
	for(int i = 1; i <= k; i++){
	cout << a[i] ;
	 if(i < k) cout << "," ;
	 else cout << "]";
	}
	
	cout << endl;
}

void Try(int i, int N, int e ){
	for(int j = e; j <= N; j++){
		a[i] = j;
		if(i == k){
			display(k);
		}
		else{
			Try(i + 1, N, j + 1);
		}
		
	}
}


int main(){
	int N;
	cin >> N;
	
	k = N; 
	
	for(int h = k; h >= 1; k--){
	Try(1, N, 1);
	}
	
	
	
	
	
	
	
	
	return 0;
}
