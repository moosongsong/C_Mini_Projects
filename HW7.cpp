//�ۼ��� : �۹��� HW7

#include<stdio.h>

int main() {
	double dist, speed, sec=0.0;
	int hour=0, min=0;
	printf("�Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &dist);
	printf("�ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf("%lf", &speed);
	hour = (int)(dist / speed);
	sec = (dist / speed)*3600;
	sec = sec - hour * 3600;
	min = sec / 60;
	sec = sec - min * 60;
	printf("%.2lf km => %d�ð� %d�� %.3lf�� �ҿ��\n", dist, hour, min, sec);
	//printf("%.0lf", sec);
	return 0;
}