//�ۼ��� : �۹��� HW24

#include<stdio.h>

int input();
int dayCal(int);
void output(int, int);

int main() {
	int deep, day;
	deep = input();
	day = dayCal(deep);
	output(deep, day);
	return 0;
}

int input() {
	int deep;
	printf("�칰�� ���̸� �Է��Ͻÿ�(cm����) :");
	scanf("%d", &deep);
	return deep;
}

int dayCal(int deep) {
	int day=0, deepNow=0;
	while (1) {
		day++;
		deepNow += 50;
		if (deep == 0) {
			day--;
			break;
		}
		else if (deep <= deepNow) {
			break;
		}
		else {
			deepNow -= 20;
		}
	}
	return day;
}

void output(int deep, int day) {
	double deepOfM = deep / 100.0;
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", deepOfM, day);
	return;
}