// 작성자 : 송무송
//HW46 : 요일 구하는 프로그램

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
	printf("* 년 월 일을 입력하시오 :");

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
			else { printf("날짜를 다시 입력해주세요 : "); }
		}
		else {
			printf("날짜를 다시 입력해주세요 : ");
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
		strcpy(week, "일");
		break;
	case 1:
		strcpy(week, "월");
		break;
	case 2:
		strcpy(week, "화");
		break;
	case 3:
		strcpy(week, "수");
		break;
	case 4:
		strcpy(week, "목");
		break;
	case 5:
		strcpy(week, "금");
		break;
	default:
		strcpy(week, "토");
		break;
	}
	printf("  %d년 %d월 %d일은 %s요일입니다.\n\n", *yearP, *monthP, *dayP, week);
	return;
}