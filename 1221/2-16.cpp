#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char text[10000];
	int alpha[26] = { 0 };
	int total=0;
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(text, 10000, ';');

	total = strlen(text);
	for (int i = 0; i < total; i++) {
		if (isalpha(text[i])) {
			char c = tolower(text[i]);
			alpha[c - 'a']++;
		}
	}
	int n = 0;
	for (int i = 0; i < 26; i++) {
		n += alpha[i];
	}
	cout << "�� ���ĺ� �� : " << n << endl;
	cout << endl;

	for (int i = 0; i < 26; i++) {
		cout << char('a' + i) << "(" << alpha[i] << ")" << '\t' << ":";
		for (int j = 0; j < alpha[i]; j++)
			cout << "*";
		cout << endl;
	}

}