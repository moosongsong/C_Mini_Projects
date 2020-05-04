//작성자 : 송무송 HW13

#include<stdio.h>
#include<string.h>

int main() {
	char lastName[10];
	char firstName[20];
	int lastNum, firstNum;
	printf("#성을 입력하시오 :");
	scanf("%s", lastName);
	printf("#이름을 입력하시오 :");
	scanf("%s", firstName);
	lastNum = strlen(lastName);
	firstNum = strlen(firstName);
	printf("%s %s\n", lastName, firstName);
	printf("%*d %*d\n", lastNum, lastNum, firstNum, firstNum);
	return 0;
}