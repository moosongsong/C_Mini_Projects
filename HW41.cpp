// 작성자 : 송무송
//HW41 : 삼각 알파벳 출력하기

#include<stdio.h>

int main() {
	char input;
	int i, j;
	while (1) {
		printf("* 영문자 대문자 입력('A' ~ 'Z'):");
		scanf("%c", &input);
		if (input<'A' || input>'Z') {
			break;
		}
		else {
			while (getchar() != '\n') { ; }
		}
		for (i = input; i >= 'A'; i--) {
			for (j = input; j >= i; j--) {
				printf("%c", j);
			}
			printf("\n");
		}
	}
	return 0;
}