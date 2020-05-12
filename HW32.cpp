// 작성자 : 송무송
//HW32 : 능수 함수 만들기

#include <stdio.h>

int inputInt(const char*msg);
double inputDouble(const char*msg);
int ipow(int num1, int num2);
double fpow(double fnum, int num);

int main() {
	int num1, num2, num3, res1;
	double fnum, res2;

	num1 = inputInt("양의 정수 밑을 입력하시오 :");
	num2 = inputInt("양의 승을 입력하시오 :");
	res1 = ipow(num1, num2);
	printf("%d의 %d승은 %d입니다.\n\n", num1, num2, res1);

	fnum = inputDouble("양의 실수 밑을 입력하시오 :");
	num3 = inputInt("양의 승을 입력하시오 :");
	res2 = fpow(fnum, num3);
	printf("%.2lf의 %d승은 %.3lf입니다.\n", fnum, num3, res2);

	return 0;
}

int inputInt(const char*msg) {
	int num;
	while (1) {
		printf(msg);
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num >= 0) {
				break;
			}
			else {
				printf("잘못 입력하셨습니다.\n");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("잘못 입력하셨습니다.\n");
		}
	}
	

	return num;
}

double inputDouble(const char*msg) {
	double num;
	while (1) {
		printf(msg);
		scanf("%lf", &num);
		while (getchar() != '\n') { ; }
		if (num >= 0) {
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
		}
	}
	
	return num;
}

int ipow(int num1, int num2) {
	int res = 1;

	if (num1 == 0) {
		return 0;
	}
	else { ; }

	if (num2 == 0) {
		return 1;
	}
	else { ; }

	for (int i = 0; i < num2; i++) {
		res = res * num1;
	}

	return res;
}

double fpow(double fnum, int num) {
	double res = 1;

	if (fnum == 0) {
		return 0;
	}
	else { ; }

	if (num == 0) {
		return 1;
	}
	else { ; }

	for (int i = 0; i < num; i++) {
		res = res * fnum;
	}

	return res;
}