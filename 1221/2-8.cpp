#include <iostream>
#include <cstring>      // strlen 쓰기 위해
using namespace std;
#pragma warning(disable:4996)     //strcpy의 4996 에러 무시

int main() {
	cout << "5명의 이름을 ';'으로 입력하세요 >> " << endl;
	char name[100];
	int name_len = 0;
	char longest_name[100];

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << ":" << name << endl;
		if (name_len < strlen(name)) {
			name_len = strlen(name);
			strcpy(longest_name, name);
		}
	}
	cout << "가장 긴 이름은 : " << longest_name << endl;
}