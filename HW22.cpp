//�ۼ��� : �۹��� HW22

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
	printf("# �������� �Է��ϼ��� :");
	scanf("%d", &num);
	return num;
}