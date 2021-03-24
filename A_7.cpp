#include<iostream>
#include<string>

using namespace std;

char a[200];
static bool check[200];

void display(int n){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}


void Try(int i, int n, string s){
	for(int j = 0; j < n; j++){
		if(!check[j]){
			check[j] = true;
			a[i] = s[j];
			if(i == n){
				display(n);
			}
			else{
				Try(i + 1, n, s);
			}
			
			check[j] = false;		 	
		}
		
	}
}


int main(){
	string s;
	cin >> s;
	
	int n = s.size();
	
	Try(1, n, s);
	
	
	
	
}
