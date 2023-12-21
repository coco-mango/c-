#include <iostream>
#include <string>
using namespace std;

int main() {
	string say_yes;

	while (1) {
		cout << "종료하고 싶으면 yes를 입력하세요 :";
		cin >> say_yes;

		if (say_yes == "yes")
			return 0;
	}
}