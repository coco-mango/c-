#include <iostream>
using namespace std;

int main() {
	cout << "문자들을 입력해라(100개 미만).";
	char count[100];
	cin.getline(count, 100, '\n');

	int cnt_x = 0;
	for (int i = 0; i < 100; i++) {
		if (count[i] == 'x')
			cnt_x++;
	}

	cout << "x 개수 :" << cnt_x << endl;
} 