//작성자 : 송무송 HW6

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
	printf("화씨 온도를 입력하세요:");
	scanf("%Lf", &dgreeF);
	return dgreeF;
}

void output(double dgreeC) {
	printf("섭씨 온도는 %.1Lf도 입니다.\n", dgreeC);
	return;
}