//작성자 : 송무송
//HW25 : 숫자 맞추기 게임

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
			printf("우와~ 맞았다~~~ 추카추카~~ %d번째 만에 맞추셨습니다.\n", count);
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
		printf("#숫자를 입력하세요 :");
		scanf("%d", &num);
		if (num >= 0 && num <= 100) {
			break;
		}
		else {
			printf("범위 밖의 수를 입력하셨습니다.\n");
		}
	}
	return num;
}

void output(int min, int max) {
	printf("%d보다는 크고 %d보다는 작습니다.\n", min, max);
	return;
}