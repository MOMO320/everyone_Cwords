#include <stdio.h>
/*

	2장. 기억 상자 만들기 -변수

	▶ 2 -1. 숫자 상자 만들기 : 자료형

	우리는 프로그래밍을 하기 위해 값을 저장해 놓기도 하고, 저장된 값을 가져와서 다시
	사용하기도 해야 합니다.
	여기서 '값을 저장한다'는 말은 컴퓨터에 있는 하드웨어인 '메모리(memory)'에 저장한다는 의미입니다.

	- 컴퓨터는 모든 정보를 0과 1, 즉 2진수 체계로 저장합니다.
	- 컴퓨터에서 숫자나 문자로 구성된 정보의 값을 저장하려면 정보의 최소 저장 단위인 비트(bit)를 사용합니다.

	□ 정수 : 소수점이 없는 숫자 (1, 100,30, 50 , ...)
	□ 실수 : 소수점이 있는 숫자 (1.40 , 3.70 , 100.432, ...)

	ㅁ 변수 : 메모리에 자료형과 이름을 지정해 저장하는 것을 변수 라고 한다.
	  (책의 내용에서 처럼 상자를 만든다는 것은 변수를 만든다는 것을 의미하고 '변수를 선언한다.' 라고 합니다.)\
	
	ㅁ 변수의 선언
	 - int a;

	 --------------------------------------------------------------------------------------
	 ▶ 2 -2. 메모리 상자에 숫자 저장하기 : 변수 선언과 초기화

	 아래와 같이 '='의 연산자는 컴퓨터에서 '같다'라는 의미가 아닌 '대입'의 의미로 봅니다.
	 그렇기에 '10을 age에 저장 또는 할당, 대입 한다.' 라고 합니다.

	 - int age = 10; 

	 --------------------------------------------------------------------------------------
	 ▶ 2 -3. 메모리 상자에서 숫자 꺼내서 사용하기 : 서식 지정자

	 ㅁ 서식 지정자란, 문자 그대로 출력되지 않고 해당하는 변수의 값이 화면에 출력 된다. ( %d, %c ...)
	 ( 콤마(,) 뒤에 변수 또는 상수를 지정해 준다.)

	 ㅁ 서식 지정자는 해당하는 자료형을 반드시 맞추어 합니다.
	   ex) %d -> 정수형(decimal(10진수) 으로 '10 진수로 값을 출력하겠다'라는 의미 입니다.

*/

int variable()
{
	//int a;			   // 1. 정수형 변수 a를 선언하여 저장 공간을 확보 (선언하다.)
	//a = 5;			   // 2. 확보된 공간에 숫자 5를 저장 (초기화 하다.)
	//printf("%d", a);   // 3. 변수 a에 저장 되어 있는 숫자 5를 화면에 출력

	int a;
	int b;

	a = 7;
	b = 5;

	printf("시은이와 우진이를 소개하겠습니다! \n");
	printf(" 시은이 나이는 %d 이고, 우진이 나이는 %d 입니다. \n", a, b);

	// 오류!! 제대로 값이 출력 되지 않음(이유 : 자료형이 맞지 않기 때문에)
	printf("강아지의 몸무게는 %d 킬로그램 입니다.\n", 5.5f); 

	return 0;
}
