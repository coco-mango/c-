#include <iostream>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��ض�(100�� �̸�).";
	char count[100];
	cin.getline(count, 100, '\n');

	int cnt_x = 0;
	for (int i = 0; i < 100; i++) {
		if (count[i] == 'x')
			cnt_x++;
	}

	cout << "x ���� :" << cnt_x << endl;
} 