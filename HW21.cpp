//작성자 : 송무송 HW21

#include<stdio.h>

int main() {
	double height, sum, avg;
	int count=1;
	sum = 0;
	
	while (count <= 5) {
		printf("%d번 학생의 키는?", count);
		scanf("%lf", &height);
		sum += height;
		count++;
	}
	
	avg = sum / (count-1);
	printf("다섯 명의 평균 키는 %.1lfcm입니다.\n", avg);

	return 0;
}