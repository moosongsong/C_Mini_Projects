//�ۼ��� : �۹���
//HW26 : ���� ���� �� ������ ����� ����.

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int random(int);
int input();
void output(int, int);
void output(int, int, int);

int main() {
	int comNum, winCount = 0, sameCount = 0, myNum, win;
	srand((unsigned int)time(NULL));
	while (1) {
		win = 1;
		comNum = random(3)+1;
		myNum = input();
		if (comNum == 3 && myNum == 1) {
			win=0;//���� ��
			output(comNum, myNum, win);
			break;
		}
		else if (comNum == 1 && myNum == 3) {
			win = 2;//����� ��;
			output(comNum, myNum, win);
			winCount++;
		}
		else if (comNum == myNum) {
			win = 3;//���
			output(comNum, myNum, win);
			sameCount++;
		}
		else if (comNum < myNum) {
			win = 0;//���� ��
			output(comNum, myNum, win);
			break;
		}
		else {
			win = 2;//����� ��
			output(comNum, myNum, win);
			winCount++;
		}
	}
	printf("���Ӱ�� : %d �� %d��\n", winCount, sameCount);

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
		printf("#������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� :");
		scanf("%d", &num);
		if (num >= 1 && num <= 3) {
			break;
		}
		else {
			printf(" ���� ���� ���� �Է��ϼ̽��ϴ�.\n");
		}
	}
	return num;
}

void output(int comNum, int myNum, int win) {
	char com[10];
	char my[10];
	char winstr[15];

	switch (comNum)
	{
	case 1:
		strcpy(com, "����");
		break;
	case 2:
		strcpy(com, "����");
		break;
	case 3:
		strcpy(com, "��");
		break;
	default:
		break;
	}

	switch (myNum)
	{
	case 1:
		strcpy(my, "����");
		break;
	case 2:
		strcpy(my, "����");
		break;
	case 3:
		strcpy(my, "��");
		break;
	default:
		break;
	}

	switch (win)
	{
	case 3:
		strcpy(winstr, "���");
		break;
	case 2:
		strcpy(winstr, "�̰�");
		break;
	case 0:
		strcpy(winstr, "����� ��");
		break;
	default:
		break;
	}
	
	printf(" ����� %s ����, ��ǻ�ʹ� %s ���� : %s���ϴ�.\n", my, com, winstr);

	return;
}