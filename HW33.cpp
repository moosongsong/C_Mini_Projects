// 작성자 : 송무송
//HW33 : 환풍구 관리 프로그램

# include <stdio.h>

int menu();
void openFan(unsigned char * fanP);
void offFan(unsigned char * fanP);
void displayFan(unsigned char * fanP);
void reverseFan(unsigned char * fanP);

int main() {
	unsigned char fanNum = 0;
	int menuNum = 0;
	while (1) {
		menuNum = menu();
		if (menuNum == 4) {
			break;
		}
		else if (menuNum == 1) {
			openFan(&fanNum);
			displayFan(&fanNum);
		}
		else if (menuNum == 2) {
			offFan(&fanNum);
			displayFan(&fanNum);
		}
		else {
			reverseFan(&fanNum);
			displayFan(&fanNum);
		}
	}

	return 0;
}

int menu() {
	int menuNum = 0;
	printf("1. 환풍구 열기 / ");
	printf("2. 환풍구 닫기 / ");
	printf("3. 환풍구 전체 전환 / ");
	printf("4. 종료 : ");
	while (1) {
		scanf("%d", &menuNum);
		if (getchar() == '\n') {
			if (menuNum >= 1 && menuNum <= 4) {
				break;
			}
			else {
				printf("  메뉴를 잘못 입력하셨습니다. 다시 입력해주세요 : ");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("  메뉴를 잘못 입력하셨습니다. 다시 입력해주세요 : ");
		}
	}
	printf("----------------------------------------------------------------------\n");
	return menuNum;
}

void openFan(unsigned char * fanP) {
	int fanNum;
	unsigned char compare = 1;
	printf("                      Fan 열기 작업 실행 화면\n");
	printf("----------------------------------------------------------------------\n");
	printf("* OPEN할 FAN번호를 입력하시오(1-8) :");
	while (1) {
		scanf("%u", &fanNum);
		if (getchar() == '\n') {
			if (fanNum >= 1 && fanNum <= 8) {
				break;
			}
			else {
				printf("  번호를 잘못 입력하셨습니다. 다시 입력해주세요 : ");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("  번호를 잘못 입력하셨습니다. 다시 입력해주세요 : ");
		}
	}
	*fanP = *fanP | (compare << (fanNum - 1));
	printf("----------------------------------------------------------------------\n");
	return;
}


void offFan(unsigned char * fanP) {
	int fanNum=0;
	unsigned char all = 0xffff;
	unsigned char compare = 1;
	printf("                      Fan 닫기 작업 실행 화면\n");
	printf("----------------------------------------------------------------------\n");
	printf("* CLOSE할 FAN번호를 입력하시오(1-8) :");
	while (1) {
		scanf("%u", &fanNum);
		if (getchar() == '\n') {
			if (fanNum >= 1 && fanNum <= 8) {
				break;
			}
			else {
				printf("  번호를 잘못 입력하셨습니다. 다시 입력해주세요 : ");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("  번호를 잘못 입력하셨습니다. 다시 입력해주세요 : ");
		}
	}
	all = all - (compare << (fanNum - 1));
	*fanP = *fanP & all;
	printf("----------------------------------------------------------------------\n");
	return;
}

void reverseFan(unsigned char * fanP) {
	unsigned char compare = 1;
	int i;
	printf("                    Fan 전체 전환 작업 실행 화면\n");
	printf("----------------------------------------------------------------------\n");
	printf("전체 FAN의 상태가 전환되었습니다.(ON,OFF 상태 뒤바뀜)\n");
	printf("----------------------------------------------------------------------\n");
	for (i = 0; i<8; i++) {
		*fanP = *fanP ^ (compare << (i - 1));
	}
	return ;
}


void displayFan(unsigned char * fanP) {
	unsigned char compare = 1;
	unsigned char i;

	for (i = 0; i < 8; i++) {
		printf("%d번 FAN  ", 8 - i);
	}
	printf("\n");
	for (int i = 0; i < 8; i++)
	{
		if ((*fanP&(compare << (7 - i))) == 0)
			printf("   OFF   ");
		else
			printf("   ON    ");
	}
	printf("\n");
	printf("----------------------------------------------------------------------\n");
	return;
}