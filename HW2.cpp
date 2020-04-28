//작성자 : 송무송 HW2

#include<stdio.h>

void changeMoney(int);

int main() {
	int money=278970;
	changeMoney(money);
	return 0;
}

void changeMoney(int money) {
	int result = 0;
	if (money >= 50000) {
		result = money / 50000;
		money = money - result * 50000;
		printf("50000원권 => %d개\n", result);
	}
	if (money >= 10000) {
		result = money / 10000;
		money = money - result * 10000;
		printf("10000원권 => %d개\n", result);
	}
	if (money >= 5000) {
		result = money / 5000;
		money = money - result * 5000;
		printf("5000원권 => %d개\n", result);
	}
	if (money >= 1000) {
		result = money / 1000;
		money = money - result * 1000;
		printf("1000원권 => %d개\n", result);
	}
	if (money >= 500) {
		result = money / 500;
		money = money - result * 500;
		printf("500원권 => %d개\n", result);
	}
	if (money >= 100) {
		result = money / 100;
		money = money - result * 100;
		printf("100원권 => %d개\n", result);
	}
	if (money >= 50) {
		result = money / 50;
		money = money - result * 50;
		printf("50원권 => %d개\n", result);
	}
	if (money >= 10) {
		result = money / 10;
		money = money - result * 10;
		printf("10원권 => %d개\n", result);
	}
	return;
}