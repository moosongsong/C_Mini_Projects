// �ۼ��� : �۹���
//HW39 : 0���� 99������ ������ ���ٿ� 10���� �������� ����ϱ�

#include<stdio.h>

int main() {
	
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 100; j+=10) {
			printf("%-3d", j);
		}
		printf("\n");
	}
	return 0;
}