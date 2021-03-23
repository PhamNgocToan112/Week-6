#include<iostream>

using namespace std;

int n, k;
char a[30];
string s;

void display() {
	for (int i = 1; i <= k; i++)
		cout << a[i];
	cout << endl;
}


void Try(int i, int e) {
	for (int j = e; j < n; j++) {
		a[i] = s[j];
		if (i == k) {
			display();
		}
		else {
			Try(i + 1, j+1);

		}
	}


}

int main() {
	cin >> n >> k;
	for (int i = 97; i < 97 + n; i++)
		s += char(i);
	Try(1, 0);
	return 0;
}