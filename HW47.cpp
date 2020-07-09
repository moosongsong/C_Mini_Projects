// �ۼ��� : �۹���
//HW47 : �ּҰ�, �ִ밪 ã��

#include <stdio.h>

void input(double * num, int size);
double max(double * num, int size);
double min(double * num, int size);
void output(double maxN, double minN);

int main() {
	double num[5];
	double maxNum, minNum;
	int size = sizeof(num) / sizeof(num[0]);
	input(num, size);
	maxNum = max(num, size);
	minNum = min(num, size);
	output(maxNum, minNum);
	return 0;
}

void input(double * num, int size) {
	int i, res;
	for (i = 0; i < size; i++) {
		printf("%d�� �� �� :", i);
		res = scanf("%lf", &num[i]);
		if (res != 1) {
			i--;
			while (getchar() != '\n') { ; }
		}
	}
	return ;
}

double max(double * num, int size) {
	int i;
	double maxN = num[0];

	for (i = 1; i < size ; i++) {
		if (num[i] > maxN) {
			maxN = num[i];
		}
	}

	return maxN;
}

double min(double * num, int size) {
	int i;
	double minN = num[0];

	for (i = 1; i < size; i++) {
		if (num[i] < minN) {
			minN = num[i];
		}
	}
	return minN;
}

void output(double maxN, double minN) {
	printf("���� ū �� : %.2lf\n", maxN);
	printf("���� ���� �� : %.2lf\n", minN);
	return;
}