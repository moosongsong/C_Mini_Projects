//�ۼ��� : �۹��� HW9

#include<stdio.h>

int input();

int main() {
	int number;
	number = input();
	printf("�Էµ� ���� 8������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x�Դϴ�.\n", number);
	return 0;
}

int input() {
	int inputNum;
	printf("�������� �Է��ϼ��� :");
	scanf("%d", &inputNum);
	return inputNum;
}