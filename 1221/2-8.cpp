#include <iostream>
#include <cstring>      // strlen ���� ����
using namespace std;
#pragma warning(disable:4996)     //strcpy�� 4996 ���� ����

int main() {
	cout << "5���� �̸��� ';'���� �Է��ϼ��� >> " << endl;
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
	cout << "���� �� �̸��� : " << longest_name << endl;
}