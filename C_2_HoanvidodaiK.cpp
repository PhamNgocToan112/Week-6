#include<iostream>

using namespace std;

static bool b[200];
int n,k;
char a[30];
string s;

void display() {
	for (int i = 1; i <= k; i++)
		cout << a[i];
	cout << endl;
}


void Try(int i) {
		for (int j = 0; j < n; j++) {
			if (!b[s[j]]) {
				a[i] = s[j];
				b[s[j]] = 1;
				if (i == k) {
					display();
				}
				else {
					Try(i + 1);
				}
				b[s[j]] = 0;
		}
	}


}

int main() {
	cin >> n >> k;
	for (int i = 97; i < 97 + n; i++)
		s += char(i);
	Try(1);
	return 0;
}