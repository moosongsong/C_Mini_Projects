//�ۼ��� : �۹��� HW14

#include<stdio.h>
#include<string.h>

int main() {
	char str[50];
	int stringNum;
	printf("* ���ڿ� �Է� :");
	scanf("%s", str);
	stringNum = strlen(str);
	printf("[% *.*s...]\n", stringNum, (int)(stringNum / 2), str);

	return 0;
}