/*
뇌를 자극하는 C 프로그래밍
p.382
정적변수(static variable)
정적변수는 함수의 호출과 무관. 기억공간은 프로그램이 시작될 때 할당되며, 프로그램이 종료될 때까지 그 기억공간을 유지.
*/

#include <stdio.h>

int *increase();

int main() {
	int i;	// 제어변수
	int *sp;

	for (i = 0; i < 5; i++) {
		sp = increase();
		printf("sum: %d \n", *sp);
	}

	return 0;
}

int *increase() {
	// 정적변수 => 프로그램이 시작될 때 할당, 끝날 때 해제
	static int sum;	// 정적 변수는 지역변수와 다르게 0으로 자동 초기화
	sum++;
	return &sum;
}