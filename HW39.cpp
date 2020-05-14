// 작성자 : 송무송
//HW39 : 0부터 99까지의 정수를 한줄에 10개씩 수직으로 출력하기

#include<stdio.h>

int main() {
	
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 100; j+=10) {
			printf("%-3d", j);
		}
		printf("\n");
	}
	return 0;
}