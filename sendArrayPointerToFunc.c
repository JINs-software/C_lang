/*
뇌를 자극하는 C 프로그래밍
p. 434

이차원 배열의 배열명은 배열포인터.
이차원 배열의 배열명은 첫번째 배열요소인 부분배열 전체를 가리키는 배열포인터 
*/

#include <stdio.h>

/*
일차원 배열 전달
void func(int *arr);
*/
				
				// 배열 포인터형
void print2rdArray(int(*)[], int, int);

int main() {
	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12} };
				// 배열포인터,		행의 갯수,				열의 갯수
	print2rdArray(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0])/sizeof(arr[0][0]));

	return 0;
}

void print2rdArray(int(*ap)[4], int rowNum, int colNum) {
	int i;
	for (i = 0; i < rowNum; i++) {
		int j;
		for (j = 0; j < colNum; j++) {
			printf("%d ", ap[i][j]);
		}
		printf("\n");
	}
}