// 작성자 : 송무송
//HW40 : 대칭되는 별 찍기

#include<stdio.h>

int main() {
	int i, j, num;
	printf("출력 라인수를 입력하시오 :");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		for (j = 0; j < num - i+1; j++) {
			printf("  ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}