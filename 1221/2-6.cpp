#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "새 암호를 입력하세요 >>";
	string passwd1;
	cin >> passwd1;

	cout << "새 암호를 다시 한 번 입력하세요";
	string passwd2;
	cin >> passwd2;
	
	if (passwd1 == passwd2)
		cout << "같습니다" << endl;
	else
		cout << "같지 않습니다" << endl;

	return 0;
}