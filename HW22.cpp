//작성자 : 송무송 HW22

#include<stdio.h>

int input();

int main() {
	int count = 1;
	int num = input();
	while (count <= num) {
		printf("*");
		if (count % 5 == 0) {
			printf("\n");
		}
		count++;
	}
	printf("\n");

	return 0;
}

int input() {
	int num;
	printf("# 정수값을 입력하세요 :");
	scanf("%d", &num);
	return num;
}