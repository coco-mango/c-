#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�� ��ȣ�� �Է��ϼ��� >>";
	string passwd1;
	cin >> passwd1;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���";
	string passwd2;
	cin >> passwd2;
	
	if (passwd1 == passwd2)
		cout << "�����ϴ�" << endl;
	else
		cout << "���� �ʽ��ϴ�" << endl;

	return 0;
}