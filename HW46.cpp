// �ۼ��� : �۹���
//HW46 : ���� ���ϴ� ���α׷�

# include <stdio.h>
#include<string.h>

int inputDate(int * yearP, int * monthP, int * dayP);
int yearCheck(int year);
int totalDateCal(int * yearP, int * monthP, int * dayP);
void output(int * yearP, int * monthP, int * dayP, int totalDate);

int main() {
	int year, month, day, res, totalDate;
	while (1) {
		res = inputDate(&year, &month, &day);
		if (res == 0) {
			break;
		}
		totalDate = totalDateCal(&year, &month, &day);
		output(&year, &month, &day, totalDate);
	}

	return 0;
}

int inputDate(int * yearP, int * monthP, int * dayP) {
	int boolean = 0;
	int res;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("* �� �� ���� �Է��Ͻÿ� :");

	while (1) {
		res = scanf("%d %d %d", yearP, monthP, dayP);

		if (res == 3) {
			boolean = 1;
		}
		else {
			boolean = 0;
			break;
		}

		if (*yearP > 0 && *monthP > 0 && *dayP > 0 && *monthP < 13) {
			if (yearCheck(*yearP) == 1) {
				month[1] = 29;
			}
			else { ; }
			if (*dayP <= month[*monthP - 1]) {
				break;
			}
			else { printf("��¥�� �ٽ� �Է����ּ��� : "); }
		}
		else {
			printf("��¥�� �ٽ� �Է����ּ��� : ");
			while (getchar() != '\n') { ; }
		}
	}

	return boolean;
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


int totalDateCal(int * yearP, int * monthP, int * dayP) {
	int totalDate = 0;
	int res;
	int monthAry[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int i = 1900; i < *yearP; i++) {
		res = yearCheck(i);
		if (res == 1) {
			totalDate += 366;
		}
		else {
			totalDate += 365;
		}
	}

	res = yearCheck(*yearP);
	if (res == 1) {
		monthAry[1] = 29;
	}
	else {
		monthAry[1] = 28;
	}

	for (int i = 1; i < *monthP; i++) {
		totalDate += monthAry[i - 1];
	}
	totalDate += *dayP;

	return totalDate;
}

void output(int * yearP, int * monthP, int * dayP, int totalDate) {
	char week[5];
	switch (totalDate % 7)
	{
	case 0:
		strcpy(week, "��");
		break;
	case 1:
		strcpy(week, "��");
		break;
	case 2:
		strcpy(week, "ȭ");
		break;
	case 3:
		strcpy(week, "��");
		break;
	case 4:
		strcpy(week, "��");
		break;
	case 5:
		strcpy(week, "��");
		break;
	default:
		strcpy(week, "��");
		break;
	}
	printf("  %d�� %d�� %d���� %s�����Դϴ�.\n\n", *yearP, *monthP, *dayP, week);
	return;
}