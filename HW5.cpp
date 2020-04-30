//작성자 : 송무송 HW5

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
	printf("전기 사용량을 입력하세요(kw):");
	scanf("%d", &kw);
	return kw;
}

void output(double fee) {
	printf("전기 사용 요금은 %Lf원 입니다.\n", fee);
	return;
}