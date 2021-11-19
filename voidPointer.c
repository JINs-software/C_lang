/*
뇌를 자극하는 C 프로그래밍
p. 449
void 포인터
*/

#include <stdio.h>
#include <string.h>

void exchange(const char *, void *, void *);

int main() {
	int a = 10, b = 20;
	double da = 1.5, db = 2.5;

	printf("정수 교환전 \n");
	printf("a: %d, b: %d \n", a, b);
	exchange("int", &a, &b);
	printf("정수 교환후 \n");
	printf("a: %d, b: %d \n", a, b);

	printf("실수 교환전 \n");
	printf("da: %lf, db: %lf \n", da, db);
	exchange("double", &da, &db);
	printf("실수 교환후 \n");
	printf("da: %lf, db: %lf \n", da, db);
}

void exchange(const char *type, void *p1, void *p2) {
	int itemp;		// 정수형 임시변수
	double dtemp;	// 실수형 임시변수

	if (strcmp(type, "int") == 0) {
		itemp = *(int *)p1;	// void 포인트형을 int 포인트형으로 형변환 후 참조
		*(int *)p1 = *(int *)p2;
		*(int *)p2 = itemp;
	}
	else if (strcmp(type, "double") == 0) {
		dtemp = *(double *)p1;
		*(double *)p1 = *(double *)p2;
		*(double *)p2 = dtemp;
	}
}
