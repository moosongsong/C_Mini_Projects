//작성자 : 송무송 HW14

#include<stdio.h>
#include<string.h>

int main() {
	char str[50];
	int stringNum;
	printf("* 문자열 입력 :");
	scanf("%s", str);
	stringNum = strlen(str);
	printf("[% *.*s...]\n", stringNum, (int)(stringNum / 2), str);

	return 0;
}