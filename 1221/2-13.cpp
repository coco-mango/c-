#include <iostream>
using namespace std;

int main() {
	int menu;
	int num;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ� *****" <<endl;

	while (1) {
		cout << "«�� : 1, ¥��� : 2, ������ : 3, ���� :4 >>";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "���κ�?";
			cin >> num;
			cout << "«��" << num << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 2:
			cout << "���κ�?";
			cin >> num;
			cout << "¥���" << num << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 3:
			cout << "���κ�?";
			cin >> num;
			cout << "������" << num << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 4:
			cout << "���� ������ �������ϴ�" <<endl;
			return 0;
			break;
		default:
			cout << "�ٽ� �ֹ��ϼ���!!" <<endl;
			break;
		}

	}
}