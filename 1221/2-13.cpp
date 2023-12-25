#include <iostream>
using namespace std;

int main() {
	int menu;
	int num;

	cout << "***** 승리장에 오신 것을 환영합니다 *****" <<endl;

	while (1) {
		cout << "짬뽕 : 1, 짜장면 : 2, 군만두 : 3, 종료 :4 >>";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "몇인분?";
			cin >> num;
			cout << "짬뽕" << num << "인분 나왔습니다" << endl;
			break;
		case 2:
			cout << "몇인분?";
			cin >> num;
			cout << "짜장면" << num << "인분 나왔습니다" << endl;
			break;
		case 3:
			cout << "몇인분?";
			cin >> num;
			cout << "군만두" << num << "인분 나왔습니다" << endl;
			break;
		case 4:
			cout << "오늘 영업은 끝났습니다" <<endl;
			return 0;
			break;
		default:
			cout << "다시 주문하세요!!" <<endl;
			break;
		}

	}
}