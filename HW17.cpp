//�ۼ��� : �۹��� HW17

#include<stdio.h>
#include<string.h>

int main() {
	char name[30];
	double height;
	char gender;
	int len;
	char genderKor[10];

	printf("#���� �Է� :");
	fgets(name, 30, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("#Ű �Է� :");
	scanf("%lf", &height);

	printf("#�����Է�(M/F) :");
	scanf(" %c", &gender);

	if (gender == 'M') {
		strcpy(genderKor, "����");
	}
	else {
		strcpy(genderKor, "����");
	}

	printf("%s���� Ű�� %.2lfcm�̰� %s�Դϴ�.\n", name, height, genderKor);
	return 0;
}