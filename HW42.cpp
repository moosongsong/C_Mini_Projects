// �ۼ��� : �۹���
//HW42 : ������ ����ϱ�(for�� ���)

#include<stdio.h>

int main() {
	int i, j, k;
	printf("<2�� for���� �̿��� ���>\n");
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 5; j++) {
			printf("%d *%d=%2d\t\t", j, i, j*i);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {
		for (j = 6; j <= 9; j++) {
			printf("%d*%d=%2d\t\t", j, i, j*i);
		}
		printf("\n");
	}
	printf("-------------------------------------------------------\n");
	printf("<3�� for���� �̿��� ���>\n");
	for (i = 2; i < 7; i+=4) {
		for (j = 1; j <= 9; j++) {
				for (k = i; k < i+4; k++) {
					printf("%d*%d=%2d\t\t", k, j, k*j);
				}
				printf("\n");
		}
		printf("\n");
	}
	return 0;
}