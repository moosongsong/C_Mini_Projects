//작성자 : 송무송 HW7

#include<stdio.h>

int main() {
	double dist, speed, sec=0.0;
	int hour=0, min=0;
	printf("거리를 입력하시오(km단위) : ");
	scanf("%lf", &dist);
	printf("시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &speed);
	hour = (int)(dist / speed);
	sec = (dist / speed)*3600;
	sec = sec - hour * 3600;
	min = sec / 60;
	sec = sec - min * 60;
	printf("%.2lf km => %d시간 %d분 %.3lf초 소요됨\n", dist, hour, min, sec);
	//printf("%.0lf", sec);
	return 0;
}