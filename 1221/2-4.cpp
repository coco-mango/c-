#include <iostream>
#include <string>
using namespace std;

float max(float num[5]);

int main() {
	float a, b, c, d, e;
	cout << " 5���� �Ǽ��� �Է��϶� >>";
	cin >> a >> b >> c >> d >> e;
	float input[5] = {a,b,c,d,e};	
	cout << "���� ū �� = " << max(input);
}

float max(float num[5]) {
	float max = num[0];
	for (int i = 1; i < 5; i++) {
		if (max < num[i])
			max = num[i];
	}
	return max;
}