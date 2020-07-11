// 작성자 : 송무송
//HW55 : 3행 4열짜리 2차원 int 배열의 행, 열의 합을 구하기

# include <stdio.h>
#include <time.h>
#include <stdlib.h>

void makeMatrix(int(*p)[4]);
int random(int n);
void findSum(int(*p)[4], int *rowP, int * colP);
void output(int(*p)[4], int *rowP, int * colP);

int main() {
	int matrix[3][4];
	int matrixRowSum[3] = { 0 };
	int matrixColSum[4] = { 0 };
	srand((unsigned int)time(NULL));
	makeMatrix(matrix);
	findSum(matrix, matrixRowSum, matrixColSum);
	output(matrix, matrixRowSum, matrixColSum);
	return 0;
}

void makeMatrix(int(*p)[4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			p[i][j] = random(9) + 1;
		}
	}
	return;
}

int random(int n) {
	int res;
	res = rand() % n;
	return res;
}

void findSum(int (*p)[4], int *rowP, int * colP) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			rowP[i] += p[i][j];
			colP[j] += p[i][j];
		}
	}

	return;
}

void output(int(*p)[4], int *rowP, int * colP) {
	for (int i = 0; i < 3; i++) {
		printf("%d행     :", i);
		for (int j = 0; j < 4; j++) {
			printf("%3d", p[i][j]);
		}
		printf("    %d행의 합 : %d\n", i, rowP[i]);
	}
	printf("열의 합 :");
	for (int j = 0; j < 4; j++) {
		printf("%3d", colP[j]);
	}
	printf("\n");
	return;
}