// �ۼ��� : �۹���
//HW35-1 : 1~100���� ���� ���(3�� ����� *, 5�� ����� #, 3�� 5�� ����� ���� ���ڷ� ���)

#include<stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0 && i % 3 == 0) {
			printf("%3d", i);
		}
		else if (i % 3 == 0) {
			printf("  *");
		}
		else if (i % 5 == 0) {
			printf("  #");
		}
		else {
			printf("%3d", i);
		}
		if (i % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}