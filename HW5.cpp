//�ۼ��� : �۹��� HW5

#include<stdio.h>

int input();
void output(double);

int main() {
	int kw = input();
	int basicFee = 660;
	double feePerKw = 88.5;
	double totalFee, tax;

	totalFee = basicFee + (kw*feePerKw);
	tax = totalFee * 0.09;
	totalFee = totalFee + tax;

	output(totalFee);
	return 0;
}

int input() {
	int kw;
	printf("���� ��뷮�� �Է��ϼ���(kw):");
	scanf("%d", &kw);
	return kw;
}

void output(double fee) {
	printf("���� ��� ����� %Lf�� �Դϴ�.\n", fee);
	return;
}