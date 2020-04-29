//작성자 : 송무송 HW4

#include<stdio.h>

int main() {
	double sec=0, fday = 365.2422;
	int iday=0, hour=0, min=0;
	iday = (int)fday;
	sec = (fday - (double)iday)*24*60*60;
	hour = sec / 3600;
	sec = sec - hour * 3600;
	min = sec / 60;
	sec = sec - min * 60;
	printf("%.4Lf일은 %d일 %d시간 %d분 %.2Lf초입니다.\n", fday, iday, hour, min, sec);

	return 0;
}