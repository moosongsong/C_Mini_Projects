// �ۼ��� : �۹���
//HW49 : �迭 ���� �����͸� �������� �����ϱ�

#include <stdio.h>

void swap(int * num, int size);

int main() {
	int num[] = { 3,5,2,1,4 };
	int i;
	int size = sizeof(num) / sizeof(num[0]);
	printf("ó�� �迭�� ����� �� :");
	for (i = 0; i < size; i++) {
		printf("%3d", num[i]);
	}
	swap(num, size);
	printf("\n�ٲ� �迭�� ����� �� :");
	for (i = 0; i < size; i++) {
		printf("%3d", num[i]);
	}
	return 0;
}

void swap(int * num, int size) {
	int temp, i;
	
	for (i = 0; i < size / 2; i++) {
		temp = num[i];
		num[i] = num[size - 1 - i];
		num[size - 1 - i] = temp;
	}
	return;
}