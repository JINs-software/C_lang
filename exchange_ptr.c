/*
뇌를 자극하는 C 프로그래밍
p.424
다중포인터
두 포인터 변수를 교환하는 함수 => 문자열 교환 
*/

#include <stdio.h>

void exchange_ptr(char **, char **);

int main() {

	char *ap = "success";
	char *bp = "failure";

	printf("ap -> %s, bp -> %s \n", ap, bp);
	exchange_ptr(&ap, &bp);
	printf("ap -> %s, bp -> %s \n", ap, bp);
	return 0;
}

void exchange_ptr(char **app, char **bpp) {
	char *tp;	// 임시 포인터변수

	tp = *app;
	*app = *bpp;
	*bpp = tp;
}