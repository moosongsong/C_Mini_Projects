// 작성자 : 송무송
//HW56 : 배열의 부분합 구하기

# include <stdio.h>
# include <time.h>
# include <stdlib.h>

void makeMatrix(int(*p)[5]);
int random(int n);
void output(int(*p)[5], int *sumP);
void findSum(int(*p)[5], int *sumP);

int main() {
	int matrix[5][5];
	int sum[3] = { 0 };
	srand((unsigned int)time(NULL));
	makeMatrix(matrix);
	findSum(matrix, sum);
	output(matrix, sum);
	return 0;
}

void makeMatrix(int(*p)[5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = random(20) + 1;
		}
	}
	return;
}

int random(int n) {
	int res;
	res = rand() % n;
	return res;
}

void findSum(int(*p)[5], int *sumP) {
	
	for (int i = 0; i < 5; i++) {
		sumP[0] += p[i][i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = i+1; j < 5; j++) {
			sumP[1] += p[i][j];
		}
	}

	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			sumP[2] += p[i][j];
		}
	}

	return;
}

void output(int(*p)[5], int *sumP) {
	for (int i = 0; i < 5; i++) {
		printf("%d번 행 :", i);
		for (int j = 0; j < 5; j++) {
			printf("%3d", p[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		printf("sum%d = %3d\n", i + 1, sumP[i]);
	}
	return;
}