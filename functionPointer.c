/*
뇌를 자극하는 C 프로그래밍
p.443
함수 포인터 변수도 함수명과 같이 참조연산자 없이 사용할 수 있다. 
*/

#include <stdio.h>

void func(int(*)(int, int));	// 매개변수: 함수포인터형
int sum(int, int);
int mul(int, int);
int max(int, int);

int main() {
	int sel;
	printf("선택 (0~2): ");
	scanf_s("%d", &sel);

	switch (sel)
	{
	case 0:
		func(sum);
		break;
	case 1:
		func(mul);
		break;
	case 2:
		func(max);
		break;
	}
}

void func(int(*fp)(int, int)) {
	int a, b;
	int res;

	printf("두 정수값을 입력: ");
	scanf_s("%d %d", &a, &b);
	res = fp(a, b);	// 함수포인터명을 함수명처럼 사용한다!
					// 함수포인터로 가리키는 함수를 호출

	printf("결과: %d", res);
}

int sum(int a, int b) {
	return a + b;
}
int mul(int a, int b) {
	return a * b;
}
int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}