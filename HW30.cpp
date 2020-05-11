// 작성자 : 송무송
//HW30 : 2진수 변환 프로그램

#include <stdio.h>

int main() {
	int num, i, res;
	unsigned int compare = 0x80000000u;
	printf(" * 10진수 정수를 입력하시오 :");
	scanf("%d", &num);
	printf("%d(10) = ", num);
	for (i = 0; i < 32; i++) {
		res = num & compare;
		if (res == 0) {
			printf("0");
		}
		else {
			printf("1");
		}
		compare = compare >> 1;
	}
	printf("(2)\n");


	return 0;
}