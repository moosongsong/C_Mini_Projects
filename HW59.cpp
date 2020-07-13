// 작성자 : 송무송
//HW59 : 서로 다른 수의 개수 출력하기

# include <stdio.h>

int inputOne(const char * msg, int * toNum);
int inputTwo(int toNum, int * num);

int main() {
	int toNum;
	int num[1000];
	int res;
	while (1) {
		res = inputOne("* 입력할 숫자의 개수 :", &toNum);
		if (res == 0) {
			break;
		}
		res = inputTwo(toNum, num);
		printf("  서로 다른 숫자의 개수 : %d\n\n", res);
	}

	return 0;
}

int inputOne(const char * msg, int * toNum) {
	int boolean = 1;

	while (1) {
		printf(msg);
		scanf("%d", toNum);
		if (getchar() == '\n') {
			if (*toNum >= 2 && *toNum <= 1000) {
				break;
			}
			else {
				printf("숫자 범위에 맞지 않습니다. 다시 입력해주세요.\n");
			}
			boolean = 1;
		}
		else {
			while (getchar() != '\n') { ; }
			boolean = 0;
			break;
		}
	}
	
	return boolean;
}

int inputTwo(int toNum, int * num) {
	int count = 0, j;
	printf("* 숫자입력:");
	for (int i = 0; i < toNum; i++) {
		scanf("%d", &num[i]);
		for (j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				break;
			}
			else { ; }
		}
		if (i == j) {
			count++;
		}
		else { ; }
	}
	return count;
}