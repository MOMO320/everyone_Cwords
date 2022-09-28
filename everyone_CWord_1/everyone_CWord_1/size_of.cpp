#include <stdio.h>

/*
	□ sizeof 연산자
	: 자료형의 메모리(바이트 수)를 알려주는 연산자 입니다.

	ex) int 형 = 8bit * 4 = 32bit (4Byte)

	---------------------------------------------------------------------
	▷ 2 -4. 중복 사용 피하기 : 변수 선언과 동시에 초기화 (별 내용 없음)
	---------------------------------------------------------------------
	▷ 2 -5. 컴퓨터는 얼마나 큰 숫자를 저장할 수 있을까 : 변수의 저장 범위

	자료형마다 메모리를 사용하는 bit의 크기가 있는데,이를 2진수로 저장 가능한 숫자의 범위를 나타 냅니다.

	ex) int 4Byte -> 32bit   n비트로 저장 가능한 숫자의 범위를 알 수 있는데, -> 0~ 2(32-1)제곱 까지 나타낼 수 있습니다.

	□ 오버플로(overflow) : 변수가 저장할 수 있는 범위를 넘어서 저장 할 경우 발생합니다.
	만약 저장 할 수 있는 값을 넘어서 저장 할 경우 다시 처음의 값으로 돌아오게 됩니다.

	ex ) 0 ~ 480 -> input : 481  == 오버플로 발생 ==> 0으로 값이 돌아옴

*/


int sizeOf()
{
	printf("interger가 사용하는 메모리 공간은 %d 바이트 입니다.\n", sizeof(int));
	printf("char가 사용하는 메모리 공간은 %d 바이트 입니다. \n", sizeof(char));
	printf("float가 사용하는 메모리 공간은 %d 바이트 입니다. \n", sizeof(float));

	//int a = 5;	// 선언과 초기화를 동시에 하다.

	//int b, c;

	//int y = 4, x, z;	// 한줄로 선언 가능


	int a, b, c, d;

	a = 2147483647;
	b = 2147483648;
	c = -2147483648;
	d = -2147483649;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);

	return 0;
}