#include<iostream>
#include<algorithm>

int a[20];
int n;

using namespace std;

bool check(int x, int y) {
	for (int i = 1; i < x; i++) {
		if (y == a[i] || abs(a[i] - y) == abs(i - x)) {
			return false;
		}
	}
	return true;
}

void display() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i] == j)cout << "* ";
			else {
				cout << ". ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void Try(int n, int i) {
	for (int j = 1; j <= n; j++) {
		if (check(i, j)) {
			a[i] = j;

			if (i == n) { display(); }
			else {
				Try(n, i + 1);
			}
		}
	}
}

int main() {

	do {
		cin >> n;
		if (n == 3 || n == 2) {
			cout << "khong the thoa man. Nhap lai:";
		}
	} while (n == 3 || n == 2);

	Try(n, 1);

}
