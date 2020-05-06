//�ۼ��� : �۹��� HW20

#include<stdio.h>

int input();
void output(int, int);
int taxCal(int);
int glossPayCal(int);

int main() {
	int workTime, tax, glossPay;
	workTime = input();
	glossPay = glossPayCal(workTime);
	tax = taxCal(glossPay);
	output(glossPay, tax);
	return 0;
}

int input() {
	int workTime;
	printf("1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� :");
	scanf("%d", &workTime);
	return workTime;
}

void output(int glossPay, int tax) {
	int netPay = glossPay - tax;
	printf("�Ѽ��� : %d��\n", glossPay);
	printf("��  �� :  %d��\n", tax);
	printf("�Ǽ��� : %d��\n", netPay);
	return;
}

int taxCal(int glossPay) {
	int tax, basicPayPerTime = 3000;
	if (glossPay <= 100000) {
		tax = (int)(glossPay * 0.15);
	}
	else {
		tax = (int)(100000 * 0.15);
		glossPay -= 100000;
		tax = tax + (int)(glossPay * 0.25);
	}
	return tax;
}

int glossPayCal(int workTime) {
	int glossPay, basicPayPerTime=3000;
	if (workTime <= 40) {
		glossPay = workTime * basicPayPerTime;
	}
	else {
		glossPay = basicPayPerTime * 40;
		workTime -= 40;
		glossPay = glossPay + workTime * (int)(basicPayPerTime*1.5);
	}
	return glossPay;
}