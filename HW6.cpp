//�ۼ��� : �۹��� HW6

#include<stdio.h>

double input();
void output(double);

int main() {
	double dgreeF = input();
	double dgreeC = 5.0 / 9 * (dgreeF - 32);
	output(dgreeC);
	return 0;
}

double input() {
	double dgreeF;
	printf("ȭ�� �µ��� �Է��ϼ���:");
	scanf("%Lf", &dgreeF);
	return dgreeF;
}

void output(double dgreeC) {
	printf("���� �µ��� %.1Lf�� �Դϴ�.\n", dgreeC);
	return;
}