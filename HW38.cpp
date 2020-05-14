//작성자 : 송무송
//HW38 : 정해진 금액으로 물건 구입하기

#include<stdio.h>
#define CREAM_BREAD 500
#define SHRIMP_SNACK 700
#define COKE 400

int main() {
	int money;
	int boolean = 0;
	while (1) {
		printf("현재 당신의 소유 금액 입력 :");
		scanf("%d", &money);
		if (getchar() != '\n') {
			break;
		}
		for (int i = CREAM_BREAD; i < money; i += CREAM_BREAD) {
			for (int j = SHRIMP_SNACK; j < money; j += SHRIMP_SNACK) {
				for (int k = COKE; k < money; k += COKE) {
					if (i + j + k == money) {
						printf("크림빵(%d개), 새우깡(%d봉지), 콜라(%d병)\n", i / CREAM_BREAD, j / SHRIMP_SNACK, k / COKE);
						boolean = 1;
					}
					else {
						continue;
					}
				}
			}
		}
		if (boolean == 1) {
			printf("어떻게 구입하시겠습니까?\n\n");
			boolean = 0;
		}
		else {
			printf("구할 수 없습니다. 다시 입력해주세요.\n\n");
		}
		
	}

	return 0;
}