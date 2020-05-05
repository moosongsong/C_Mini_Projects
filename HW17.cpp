//작성자 : 송무송 HW17

#include<stdio.h>
#include<string.h>

int main() {
	char name[30];
	double height;
	char gender;
	int len;
	char genderKor[10];

	printf("#성명 입력 :");
	fgets(name, 30, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("#키 입력 :");
	scanf("%lf", &height);

	printf("#성별입력(M/F) :");
	scanf(" %c", &gender);

	if (gender == 'M') {
		strcpy(genderKor, "남성");
	}
	else {
		strcpy(genderKor, "여성");
	}

	printf("%s씨의 키는 %.2lfcm이고 %s입니다.\n", name, height, genderKor);
	return 0;
}