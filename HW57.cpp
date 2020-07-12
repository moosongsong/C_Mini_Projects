// 작성자 : 송무송
//HW57 : 배열의 부분합 구하기

# include <stdio.h>
# include<string.h>

void inputStr(char(*str)[20]);
void output(char(*str)[20], char * firstP, char * lastP);
void findFirstLast(char(*str)[20], char * firstP, char * lastP);

int main() {
	char str[5][20];
	char first[5];
	char last[5];
	inputStr(str);
	findFirstLast(str, first, last);
	output(str, first, last);
	return 0;
}

void inputStr(char(*str)[20]) {
	for (int i = 0; i < 5; i++) {
		printf("# %d번 문자열을 입력하시오 :", i+1);
		scanf("%s", str[i]);
	}
	return;
}

void findFirstLast(char(*str)[20], char * firstP, char * lastP) {
	int len;
	for (int i = 0; i < 5; i++) {
		len = strlen(str[i]);
		firstP[i] = str[i][0];
		lastP[i] = str[i][len - 1];
	}
	return;
}

void output(char(*str)[20], char * firstP, char * lastP) {
	for (int i = 0; i < 5; i++) {
		printf("str[%d] = %s  %c %c\n", i, str[i], firstP[i], lastP[i]);
	}
	return;
}