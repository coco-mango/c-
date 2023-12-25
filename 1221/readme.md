### 23년 12월 21일 C++ 1일차 (Chap1, Chap2)

***
#### Chap 1
1-1. add.cpp
* <iostream> : input/output를 하기 위해 <iostream> 헤더 파일을 사용
* 정수 a와 b를 합한 값을 std::cout을 사용하여 출력

1-2. name.cpp
* std:cout을 사용하여 "내 이름"을 출력
* return 0를 기입하여, main 함수가 종료되면 프로그램도 함께 종료 (main함수가 운영체제에게 작업을 완료했다고 알림)

1-3. me.cpp
* 나의 이름, 나이, 희망직업을 출력

1-4. sum.cpp
* 정수 1에서 10까지 더한 값을 대입한 sum 값을 출력

1-5. star.cpp
* *을 1개 ~ 4개까지 차례대로 출력
***
#### Chap
2-1. display.cpp
* 1~100까지 정수를 한 줄에 10개씩 10줄로 출력
* 각 정수는 탭으로 분리하여 출력 : '\t'
* 각 행의 1~9번째 숫자(10으로 나눴을 때 나머지가 1~9)는 '\t'으로 분리하고, 10번째 숫자(10으로 나눴을 때 나머지가 0)은 '\n'을 입력해서 다음 행으로 넘김

2-2. nxn.cpp
* 첫번째 행에서, 행은 1~9까지 증가하고 열은 1로 고정
* 두번째 행에서, 행은 1~9까지 증가하고 열은 2로 고정
* 따라서, 행은 증가하고 열은 고정인 2중 for문으로 코드 작성
* 한 행이 끝나면 '\n'을 입력하여 다음 행으로 넘김

2-3. bigger.cpp
* int bigger(int num1, int num2)라는 함수를 만들어서 main문과 bigger문을 구분함
* c++에서는 함수 원형 선언시 매개 변수도 함께 선언해야 함

2-4. max.cpp
* 실수(float) 5개를 입력받고
* max값은 일단 첫번째 입력 받은 값으로 초기값을 지정하고, 그 이후에 입력받은 숫자들과 비교하여 더 큰 숫자를 max값으로 반환
* 숫자를 비교하는 if문에서,
  if(max>num[i])
      return max;
  else
      return num[i];
  는 오류발생

2-5. count_x.cpp
* cin.getline()을 이용하여, 문자들을 배열로 입력받아서 첫번째 값부터 'x'가 있는 지 for 문으로 확인 한 후, x가 있으면 1씩 카운트하여, 최종 x의 개수를 출력

2-6. comp.cpp
* #include <string>을 사용하여 암호를 string 값으로 입력 받은 후
* 두 개의 값이 서로 같은지 확인

2-7. say_yes.cpp
* #include <string>을 사용하여, string 값으로 yes를 받으면 빠져나감
* yes가 입력되지 않은 이상 계속 반복해야 하기 때문에 while(1)을 이용하여 무한반복문을 생성하고, yes가 입력되면 return 0;으로 빠져나옴

2-8. long_name.cpp
* 이름 입력을 받기 위해, char name[100] 변수 생성하고 배열로 받기 위해서, cin.getline(name,100,';') 로 name 입력받음
* 글자수를 알기 위해서 strlen(name)을 사용하고, 이때 #include <cstring> 추가
* 글자수가 가장 긴 이름을 저장하기 위해서, strcpy(longest_name, name) 추가하는데, 이 때 longest_name 변수에 글자수가 가장 긴 name을 copy한다는 의미
* strcpy를 사용하면 4996 에러가 생성되기 때문에, #pragma warning(disable:4996)을 추가하여 4996 에러 무시

2-9. info.cpp 수정 필요 (string이 아닌 cin.getline 쓰기)

2-10. hello.cpp
* 문자열을 입력하기 전까진 문자가 몇글자인지 모르기 때문에 100으로 잡은 후에
* 문자열의 마지막 값('\0 null)이 입력될 때가찌 출력되는 for문 사용
* 입력된 값을 한글자씩 늘려나가며 반복해서 출력하기 때문에 2중 for문을 사용
* hello의 경우
  h
  he
  hel
  hell
  hello
  로 출력됨

2-11. compc1.cpp
2-12. compc2.cpp
* c와 c++을 비교하기
* c에서는 stdio.h, printf, scanf를 사용하지만
* c++에서는 iostream, cout, cin을 사용하고
* c++에서는 함수의 원형 선언 시 매개 변수도 모두 선언해야함

2-13. chinesefood_order.cpp
* switch~case를 사용하여 menu를 선택하고, num로 몇 인분인지 입력받음

2-14. cafe_order.cpp
* 하루 총 매출이 2만원이 넘어가면 주문마감, 그 이전엔 계속 주문이 가능함
* 따라서, if문으로 total 매출이 20000원 이하일 때까지 무한반복됨
* (strcmp) 메뉴를 입력하고 입력한 메뉴가 메뉴판과 일치하면 수량을 입력받고 얼마인지 알려줌. 그리고 total 매출에 판매금액을 계속 더함
* total 매출이 2만원을 넘은 다음 주문 부터는 주문을 할 수가 없으므로 return 0로 while문 빠져나오면서 종료

2-15. 아직 못함

2-16. text_histo.cpp
* 영어문장에 쓰여진 알파벳들 각각의 수를 카운트하고, 이것을 *로 나타내어 히스토그램처럼 보이게 함
* cin.getline을 사용하여 영어 문장을 입력받고, 알파벳 하나하나가 알파벳인지 확인(isalpha)한 후, 알파벳이 대문자인 경우를 생각하여 대문자는 소문자로 변환(tolower)하여 다른 변수(c)에 저장
* alpah[c - 'a']++ : 저장된 변수 c에 'a'를 빼면 26개 알파벳이 순서대로 나열된 것과 같음
* ex) 저장된 알파벳이 'a'인 경우 a-'a' = 0으로 alpha[0]에는 a의 갯수를 ++로 카운트함
* 그리고 n에는 영어문장에 쓰여진 모든 알파벳(a~z)의 수를 카운트하여 저장함
* 마지막 for문에서 char('a'+i)는 i=0일 때, 'a'+0 = a가 되므로, a의 수만큼 *를 디스플레이한다는 의미
