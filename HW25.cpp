//�ۼ��� : �۹���
//HW25 : ���� ���߱� ����

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int random(int);
int input();
void output(int, int);

int main() {
	int comNum, myNum, count = 0;
	int min = 0, max = 100;
	srand((unsigned int)time(NULL));
	comNum = random(100);
	while (1) {
		myNum = input();
		count++;
		if (myNum == comNum) {
			printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d��° ���� ���߼̽��ϴ�.\n", count);
			break;
		}
		else if (myNum >= comNum) {
			max = myNum;
		}
		else {
			min = myNum;
		}
		output(min, max);
	}

	return 0;
}

int random(int n) {
	int res;
	res = rand() % n;
	return res;
}

int input() {
	int num;
	while (1) {
		printf("#���ڸ� �Է��ϼ��� :");
		scanf("%d", &num);
		if (num >= 0 && num <= 100) {
			break;
		}
		else {
			printf("���� ���� ���� �Է��ϼ̽��ϴ�.\n");
		}
	}
	return num;
}

void output(int min, int max) {
	printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", min, max);
	return;
}