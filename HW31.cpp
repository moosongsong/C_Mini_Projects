// 작성자 : 송무송
//HW31 : 은행계좌 입출금 관리 프로그램

#include <stdio.h>

char menu();
int inputInt(const char*msg);
void deposit(int money, int* remainPt);
void withdraw(int money, int* remainPt);

int main() {
	char menuNum;
	int remain = 0;
	int money;
	while (1) {
		printf("* 현재 잔액은 %d원 입니다.\n\n", remain);
		menuNum = menu();
		if (menuNum == 'i') {
			money = inputInt("# 입금액을 입력하세요:");
			deposit(money, &remain);
		}
		else if (menuNum == 'o') {
			money = inputInt("# 출금액을 입력하세요:");
			withdraw(money, &remain);
		}
		if (menuNum == 'q') {
			break;
		}
	}

	return 0;
}

char menu() {
	char menuNum;
	while (1) {
		printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료):");
		scanf(" %c", &menuNum);
		if (getchar() == '\n') {
			if (menuNum == 'i' || menuNum == 'o' || menuNum == 'q') {
				break;
			}
			else {
				printf("* 잘못 입력하셨습니다.\n\n");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("* 잘못 입력하셨습니다.\n\n");
		}
	}

	return menuNum;
}

int inputInt(const char*msg) {
	int money;
	printf(msg);
	while (1) {

		scanf("%d", &money);
		if (getchar() == '\n') {
			if (money >= 0) {
				break;
			}
			else {
				printf("잘못 입력하셨습니다. 다시 입력하십시오 :");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("잘못 입력하셨습니다. 다시 입력하십시오 :");
		}
	}
	
	return money;
}

void deposit(int money, int* remainPt) {
	*remainPt += money;
	return;
}

void withdraw(int money, int* remainPt) {
	if (*remainPt >= money) {
		*remainPt -= money;
	}
	else {
		printf("* 잔액이 부족합니다.\n");
	}
	return ;
}