// �ۼ��� : �۹���
//HW40 : ��Ī�Ǵ� �� ���

#include<stdio.h>

int main() {
	int i, j, num;
	printf("��� ���μ��� �Է��Ͻÿ� :");
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