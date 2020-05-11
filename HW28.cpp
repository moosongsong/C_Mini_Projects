// 작성자 : 송무송
//HW28 : 문자 종류별 카운트 프로그램(getchar()함수 이용)

#include<stdio.h>

int main() {
	int englishCount = 0, numberCount = 0, spaceCount = 0, etcCount = 0;
	char ch;
	printf("# 영문 문장을 입력하시오 :\n");
	while (1) {
		ch = getchar();
		if (ch == EOF) {
			break;
		}
		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z')) {
			englishCount++;
		}
		else if (ch >= '0'&&ch <= '9') {
			numberCount++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			spaceCount++;
		}
		else {
			etcCount++;
		}
	}
	printf("* 영문자 대소문자 개수 : %d개\n", englishCount);
	printf("* 숫자문자 개수 : %d개\n", numberCount);
	printf("* 여백문자(space, tab, enter) 개수 : %d개\n", spaceCount);
	printf("* 그 외 기타문자 개수 : %d개\n", etcCount);

	return 0;
}