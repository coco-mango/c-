#include <iostream>
#include <string>
using namespace std;

int main() {
	char coffee[100];
	int num;
	int price;
	int total=0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다" << endl;

	while (1) {
		cout << "주문 >>";

		if (total <= 20000) {
			cin >> coffee;
			if (strcmp(coffee, "에스프레소") == 0) {
				cin >> num ;
				price = 2000 * num;
				cout << price << "입니다. 맛있게 드세요" << endl;
				total += price;
			}
			if (strcmp(coffee, "아메리카노") == 0) {
				cin >> num;
				price = 2300 * num;
				price = 2000 * num;
				cout << price << "입니다. 맛있게 드세요" << endl;
				total += price;
			}
			if(strcmp(coffee, "카푸치노") == 0) {
				cin >> num;
				price = 2500 * num;
				price = 2000 * num;
				cout << price << "입니다. 맛있게 드세요" << endl;
				total += price;
			}
		}
		else {
			cout << "오늘" << total << "원을 판매하여 카페를 닫습니다. 내일 봐요 ~~~" << endl;
			return 0;
		}
		
	}
}