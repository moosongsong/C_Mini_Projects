//�ۼ��� : �۹��� HW3

#include<stdio.h>

int main() {
	int totalSecond = 54321;
	int sec = totalSecond;
	int hour = 0, min = 0;
	hour = sec / 3600;
	sec = sec - hour * 3600;
	min = sec / 60;
	sec = sec - min * 60;
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", totalSecond, hour, min, sec);

	return 0;
}