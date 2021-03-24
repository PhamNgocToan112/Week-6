#include <iostream>

using namespace std;

void f(int b[]) {
	for (int i = 0; i < 20; i++) {
		cout << &b[i] << " ";
	}
	cout << endl;

	cout << &b[0];
}

int main()
{
	int a[20];
	for (int i = 0; i < 20; i++) {
		cout << &a[i] << " ";
	}
	cout << endl;

	cout << &a[0];

	cout << endl;
	f(a);
	/*ta thấy các kết quả từ main và hàm f là giống nhau 
	=> Tuy C++ không cho phép truyền toàn bộ mảng như là tham số của hàm nhưng chúng ta có thể truyền qua con 
	trỏ bằng cách ghi tên mảng ở phần truyền vào hàm(có thể có hoặc khôg kích cỡ cụ thể)*/
}
