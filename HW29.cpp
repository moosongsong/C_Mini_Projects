// 작성자 : 송무송
//HW29 : 고집수

#include<stdio.h>

int inputUInt(const char*);
int transNumber(int);

int main() {
	int start, last, num, temp, count=0, minicount;
	start = inputUInt("시작 값(P1) :");
	last = inputUInt("끝 값(P2) :");
	num = inputUInt("고집수(N) :");
	printf("고집수가 %d인 숫자 출력\n", num);
	for (int i = start; i <= last; i++) {
		minicount = 0;
		temp = i;
		while (temp >= 10) {
			temp = transNumber(temp);
			minicount++;
		}
		if (minicount == 5) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("총 개수 : %d개\n", count);

	return 0;
}

int inputUInt(const char* msg) {
	int num;
	while (1) {
		printf(msg);
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num > 0) {
				break;
			}
			else {
				printf("음수를 입력하셨습니다. 다시 입력해주세요.\n");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("잘못된 형식으로 입력하셨습니다. 다시 입력해주세요.\n");
		}
	}
	return num;
}

int transNumber(int num) {
	int transNum=1;
	int len=0, temp1, temp2;
	temp1 = num;
	temp2 = num;
	while (temp1 != 0) {
		temp1 /= 10;
		len++;
	}
	for (int i = 0; i < len; i++) {
		transNum *= temp2 % 10;
		temp2 = temp2 / 10;
	}
	
	return transNum;
}