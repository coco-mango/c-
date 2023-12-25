#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char text[10000];
	int alpha[26] = { 0 };
	int total=0;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
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
	cout << "총 알파벳 수 : " << n << endl;
	cout << endl;

	for (int i = 0; i < 26; i++) {
		cout << char('a' + i) << "(" << alpha[i] << ")" << '\t' << ":";
		for (int j = 0; j < alpha[i]; j++)
			cout << "*";
		cout << endl;
	}

}