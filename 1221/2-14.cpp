#include <iostream>
#include <string>
using namespace std;

int main() {
	char coffee[100];
	int num;
	int price;
	int total=0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� �Դϴ�" << endl;

	while (1) {
		cout << "�ֹ� >>";

		if (total <= 20000) {
			cin >> coffee;
			if (strcmp(coffee, "����������") == 0) {
				cin >> num ;
				price = 2000 * num;
				cout << price << "�Դϴ�. ���ְ� �弼��" << endl;
				total += price;
			}
			if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
				cin >> num;
				price = 2300 * num;
				price = 2000 * num;
				cout << price << "�Դϴ�. ���ְ� �弼��" << endl;
				total += price;
			}
			if(strcmp(coffee, "īǪġ��") == 0) {
				cin >> num;
				price = 2500 * num;
				price = 2000 * num;
				cout << price << "�Դϴ�. ���ְ� �弼��" << endl;
				total += price;
			}
		}
		else {
			cout << "����" << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ���� ~~~" << endl;
			return 0;
		}
		
	}
}