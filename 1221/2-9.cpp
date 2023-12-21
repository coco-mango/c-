#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string add;
	string age;

	cout << "이름은 ? ";
	cin >> name;
	cout << "주소는 ? ";
	cin >> add;
	cout << "나이는 ? ";
	cin >> age;

	cout << name << ',' << add << ',' << age << "세";

	return 0;
}
