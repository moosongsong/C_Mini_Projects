//작성자 : 송무송 HW11

#include<stdio.h>

int main() {
	int inputNum;
	printf("ASCII code 값을 입력하시오 :");
	scanf("%d", &inputNum);
	printf("%d은 '%c'의 ASCII code 입니다.\n",inputNum, inputNum);
	return 0;
}