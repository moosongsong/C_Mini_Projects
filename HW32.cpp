// �ۼ��� : �۹���
//HW32 : �ɼ� �Լ� �����

#include <stdio.h>

int inputInt(const char*msg);
double inputDouble(const char*msg);
int ipow(int num1, int num2);
double fpow(double fnum, int num);

int main() {
	int num1, num2, num3, res1;
	double fnum, res2;

	num1 = inputInt("���� ���� ���� �Է��Ͻÿ� :");
	num2 = inputInt("���� ���� �Է��Ͻÿ� :");
	res1 = ipow(num1, num2);
	printf("%d�� %d���� %d�Դϴ�.\n\n", num1, num2, res1);

	fnum = inputDouble("���� �Ǽ� ���� �Է��Ͻÿ� :");
	num3 = inputInt("���� ���� �Է��Ͻÿ� :");
	res2 = fpow(fnum, num3);
	printf("%.2lf�� %d���� %.3lf�Դϴ�.\n", fnum, num3, res2);

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
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
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