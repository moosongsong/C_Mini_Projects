// 작성자 : 송무송
//HW27 : 달걀포장 프로그램 작성하기

#include<stdio.h>
int input();

int main() {
	int count = 0;
	int weight;
	while (1) {
		weight = input();
		if (weight >= 150 && weight <= 500) {
			count++;
			printf("현재 달걀의 수 :%d\n", count);
		}
		else if (weight < 150) {
			printf("*메추리알 가지고 장난하지 마시오~^^\n");
		}
		else {
			printf("*타조알 가지고 장난하지 마시오~^^\n");
		}
		if (count == 10) {
			break;
		}
	}
	printf("\n*** 달걀포장이 끝났습니다.\n");

	

	return 0;
}

int input() {
	int weight;
	while (1) {
		printf("# 계란의 무게를 입력하세요(단위 : g) :");
		scanf("%d", &weight);
		if (getchar() == '\n') { 
			break; 
		}
		else {
			while (getchar() != '\n') { ; }
			printf("다시 입력해주세요\n");
		}
	}
	return weight;
}