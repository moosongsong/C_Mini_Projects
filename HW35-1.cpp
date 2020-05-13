// 작성자 : 송무송
//HW35-1 : 1~100까지 숫자 출력(3의 배수는 *, 5의 배수는 #, 3과 5의 배수는 정상 숫자로 출력)

#include<stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0 && i % 3 == 0) {
			printf("%3d", i);
		}
		else if (i % 3 == 0) {
			printf("  *");
		}
		else if (i % 5 == 0) {
			printf("  #");
		}
		else {
			printf("%3d", i);
		}
		if (i % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}