### 23년 12월 21일 C++ 1일차

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

2-8. 아직

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
