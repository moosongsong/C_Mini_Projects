//�ۼ��� : �۹��� HW19

#include<stdio.h>

int input();
int yearCheck(int);
void output(int, int);

int main() {
	int year, boolean;
	year = input();
	boolean = yearCheck(year);
	output(year, boolean);
	return 0;
}

int input() {
	int year;
	printf("�⵵�� �Է��Ͻÿ� :");
	scanf("%d", &year);
	return year;
}

int yearCheck(int year) {
	int boolean;
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				boolean = 1;
			}
			else {
				boolean = 0;
			}
		}
		else {
			boolean = 1;
		}
	}
	else {
		boolean = 0;
	}

	return boolean;
}

void output(int year, int boolean) {
	if (boolean) {
		printf("%d���� ����(Leap year)�Դϴ�.\n", year);
	}
	else {
		printf("%d���� ���(Common year)�Դϴ�.\n", year);
	}
	return;
}