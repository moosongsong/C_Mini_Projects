//�ۼ��� : �۹��� HW16

#include<stdio.h>

int input();
void output(int);
int stationCal(int);

int main() {
	output(stationCal(input()));
	return 0;
}

int input() {
	int stationNum;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &stationNum);
	return stationNum;
}

void output(int total) {
	printf("��� : %d��\n", total);
	return;
}

int stationCal(int stationNum) {
	int total=0;
	if (stationNum <= 5) {
		total = 600;
	}
	else if (stationNum <= 10) {
		total = 800;
	}
	else {
		total = 800 + (stationNum - 9) / 2 * 100;
	}
	return total;
}