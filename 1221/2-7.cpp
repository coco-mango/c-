#include <iostream>
#include <string>
using namespace std;

int main() {
	string say_yes;

	while (1) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� :";
		cin >> say_yes;

		if (say_yes == "yes")
			return 0;
	}
}