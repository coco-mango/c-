#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i<=100; i++) {
		if (i % 10 != 0) {
			cout << i << '\t';
		}
		else
			cout << i << '\n';
	}
	return 0;
}