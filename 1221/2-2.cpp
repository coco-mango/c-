#include <iostream>
#include <string>
using namespace std;

int main() {
	int num1, num2;
	for (num2 = 1; num2 <= 9; num2++) {
		for (num1 = 1; num1 <= 9; num1++) {
			cout << num1 << 'x' << num2 << '=' << num1 * num2 << '\t';
		}
		cout << '\n';
	}
	return 0;
}