// 작성자 : 송무송
//HW64 : 야구게임 만들기

# include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

int random(int);
void makeComRandomNumber(int * comNum);
void input(char * userInput, int * count);
void ballCountCheck(int * comNum, char * userInput, int * ballCount, int * strikeCount);
int outputResult(int * ballCount, int * strikeCount);

int main() {
	int comNum[4];
	char userInput[4];
	int count = 0, res;
	int ballCount, strikeCount;
	
	srand((unsigned int)time(NULL));

	makeComRandomNumber(comNum);

	printf("컴퓨터가 출력한 숫자 :");
	for (int i = 0; i < 4; i++) {
		printf("%d  ", comNum[i]);
	}
	printf("\n");

	while (1) {
		ballCount = 0; strikeCount = 0;
		input(userInput, &count);
		ballCountCheck(comNum, userInput, &ballCount, &strikeCount);
		res = outputResult(&ballCount, &strikeCount);
		if (res == TRUE) {
			break;
		}
	}
	return 0;
}

int random(int n) {
	int res;
	res = rand() % n;
	return res;
}

void makeComRandomNumber(int * comNum) {
	int num = random(10);
	int i, j;
	for (i = 0; i < 4; i++) {
		comNum[i] = random(10);
		if (i != 0) {
			for (j = 0; j < i; j++) {
				if (comNum[i] == comNum[j]) {
					i--;
					break;
				}
			}
		}
	}
	return;
}

void input(char * userInput, int * count) {
	int i;
	printf("# %d차 : ", *count);
	for (i = 0; i < 4; i++) {
		userInput[i] = getche();
		printf(" ");
	}
	(*count)++;
	return;
}

void ballCountCheck(int * comNum, char * userInput, int *ballCount, int * strikeCount) {
	int i, j;
	int userNum[4];

	for (i = 0; i < 4; i++) {
		userNum[i] = userInput[i] - '0';
	}

	for (i = 0; i < 4; i++) {
         for (j = 0; j < 4; j++) {
             if (comNum[i] == userNum[j]) {
                 if (i == j) { 
					 (*strikeCount)++; 
				 }
                 else { 
					 (*ballCount)++; 
				 }
             }
             else { ; }
         }
     }

	return;
}

int outputResult(int *ballCount, int * strikeCount) {

	if (*strikeCount == 4) {
		printf(" OK!!!\n");
		return TRUE;
	}
	else if (*strikeCount == 0 & *ballCount == 0) {
		printf(" NO!\n");
		return FALSE;
	}
	else {
		printf(" %dS %dB\n", *strikeCount, *ballCount);
		return FALSE;
	}	
}