//�ۼ��� : �۹��� HW21

#include<stdio.h>

int main() {
	double height, sum, avg;
	int count=1;
	sum = 0;
	
	while (count <= 5) {
		printf("%d�� �л��� Ű��?", count);
		scanf("%lf", &height);
		sum += height;
		count++;
	}
	
	avg = sum / (count-1);
	printf("�ټ� ���� ��� Ű�� %.1lfcm�Դϴ�.\n", avg);

	return 0;
}