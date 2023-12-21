#include <iostream>
#include <string>
using namespace std;

int bigger(int num1, int num2);

int main() {
	int a, b;

	cout << "두 수를 입력하라 \n";
	cin >> a >> b;
	cout << "큰 수 =" << bigger(a,b);
	return 0;
}

int bigger(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}