//�ۼ��� : �۹��� HW13

#include<stdio.h>
#include<string.h>

int main() {
	char lastName[10];
	char firstName[20];
	int lastNum, firstNum;
	printf("#���� �Է��Ͻÿ� :");
	scanf("%s", lastName);
	printf("#�̸��� �Է��Ͻÿ� :");
	scanf("%s", firstName);
	lastNum = strlen(lastName);
	firstNum = strlen(firstName);
	printf("%s %s\n", lastName, firstName);
	printf("%*d %*d\n", lastNum, lastNum, firstNum, firstNum);
	return 0;
}