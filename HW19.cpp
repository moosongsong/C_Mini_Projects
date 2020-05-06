//작성자 : 송무송 HW19

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
	printf("년도를 입력하시오 :");
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
		printf("%d년은 윤년(Leap year)입니다.\n", year);
	}
	else {
		printf("%d년은 평년(Common year)입니다.\n", year);
	}
	return;
}