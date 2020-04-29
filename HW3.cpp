//작성자 : 송무송 HW3

#include<stdio.h>

int main() {
	int totalSecond = 54321;
	int sec = totalSecond;
	int hour = 0, min = 0;
	hour = sec / 3600;
	sec = sec - hour * 3600;
	min = sec / 60;
	sec = sec - min * 60;
	printf("%d초는 %d시간 %d분 %d초 입니다.\n", totalSecond, hour, min, sec);

	return 0;
}