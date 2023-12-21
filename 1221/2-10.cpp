#include <iostream>
#include <string>
using namespace std;

int main() {
    char s[100];
    cout << "문자열 입력 >> ";
    cin.getline(s, 100, '\n');

    for (int i = 0; i < 100 && s[i] != '\0'; i++) { // 마지막 값[null] 값까지만 count
        for (int j = 0; j <= i; j++) {
            cout << s[j];
        }
        cout << endl;
    }

    return 0;
}
