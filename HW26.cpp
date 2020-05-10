//작성자 : 송무송
//HW26 : 가위 바위 보 게임을 만들어 보자.

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
			win=0;//컴터 승
			output(comNum, myNum, win);
			break;
		}
		else if (comNum == 1 && myNum == 3) {
			win = 2;//사용자 승;
			output(comNum, myNum, win);
			winCount++;
		}
		else if (comNum == myNum) {
			win = 3;//비김
			output(comNum, myNum, win);
			sameCount++;
		}
		else if (comNum < myNum) {
			win = 0;//컴터 승
			output(comNum, myNum, win);
			break;
		}
		else {
			win = 2;//사용자 승
			output(comNum, myNum, win);
			winCount++;
		}
	}
	printf("게임결과 : %d 승 %d무\n", winCount, sameCount);

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
		printf("#바위는 1, 가위는 2, 보는 3 중에서 선택하세요 :");
		scanf("%d", &num);
		if (num >= 1 && num <= 3) {
			break;
		}
		else {
			printf(" 범위 밖의 수를 입력하셨습니다.\n");
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
		strcpy(com, "바위");
		break;
	case 2:
		strcpy(com, "가위");
		break;
	case 3:
		strcpy(com, "보");
		break;
	default:
		break;
	}

	switch (myNum)
	{
	case 1:
		strcpy(my, "바위");
		break;
	case 2:
		strcpy(my, "가위");
		break;
	case 3:
		strcpy(my, "보");
		break;
	default:
		break;
	}

	switch (win)
	{
	case 3:
		strcpy(winstr, "비겼");
		break;
	case 2:
		strcpy(winstr, "이겼");
		break;
	case 0:
		strcpy(winstr, "당신이 졌");
		break;
	default:
		break;
	}
	
	printf(" 당신은 %s 선택, 컴퓨터는 %s 선택 : %s습니다.\n", my, com, winstr);

	return;
}