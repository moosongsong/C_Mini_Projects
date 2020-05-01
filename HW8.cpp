//작성자 : 송무송 HW8

#include<stdio.h>

int main() {
	int hist, liter, enter;
	double avg;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &hist, &liter, &enter);
	avg = (hist + liter + enter) / 3.0;
	printf("총점은 %d이고 평균은 %.2Lf입니다.\n", hist + liter + enter, avg);
	return 0;
}