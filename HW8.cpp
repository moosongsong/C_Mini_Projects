//�ۼ��� : �۹��� HW8

#include<stdio.h>

int main() {
	int hist, liter, enter;
	double avg;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &hist, &liter, &enter);
	avg = (hist + liter + enter) / 3.0;
	printf("������ %d�̰� ����� %.2Lf�Դϴ�.\n", hist + liter + enter, avg);
	return 0;
}