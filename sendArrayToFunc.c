/*
뇌를 자극하는 C 프로그래밍
p.319 (배열을 처리하는 함수)
*/

#include <stdio.h>

// 함수 선언
void input_growth(double *);        // 배열에 데이터를 입력하는 함수
double average_growth(double *);    // 평균 경제성장률 구하기
int extra_growth(double *, double); // 평균을 초과한 횟수 계산

int main() {
	double growth[10];
	double avg;
	int ext;

	input_growth(growth);
	
	avg = average_growth(growth);
	ext = extra_growth(growth, avg);

	printf("평균 경제성장률: %.21f\n", avg);
	printf("평균 경제성장률 초과 횟수: %d\n", ext);

}

void input_growth(double *gp) {
	printf("10년간 경제성장률 입력: ");
	int i;  // 제어 변수
	for (i = 0; i < 10; i++) {
		//printf("%d년: ", i+1);
		scanf_s("%lf", gp + i); // 포인터 직접 전달, gp+i: 포인터
		// 불가
		// scanf_s("lf", gp[i]);
	}
}

double average_growth(double *gp) {
	double tot = 0;
	int i;
	for (i = 0; i < 10; i++) {
		tot += gp[i];	
		// 또는
		//tot += *(gp + i); 
	}
	return tot / 10;
}

int extra_growth(double *gp, double avg) {
	int count = 0;
	int i;
	for (i = 0; i < 10; i++) {
		if (gp[i] > avg)
		// 또는
		//if(*(gp + i) > avg)
			count++;
	}
	return count;
}