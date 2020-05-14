// 작성자 : 송무송
//HW37 : 황금동전

# include <stdio.h>

int input();
int totalCoinCal(int workingDay);
void output(int workingDay, int totalCoin);

int main() {
	int workingDay;
	int i = 0;
	int totalCoin;
	
	for (i = 0; i < 5; i++) {
		workingDay = input();
		totalCoin = totalCoinCal(workingDay);
		output(workingDay, totalCoin);
	}
	
	return 0;
}

int input() {
	int workingDay;
	while (1) {
		printf("* 기사의 근무일수를 입력하시오 :");
		scanf("%d", &workingDay);
		if (getchar() == '\n') {
			if (workingDay >= 0) {
				break;
			}
			else {
				printf("음수를 입력하셨습니다. 다시 입력해주세요.\n\n");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("잘못 입력하셨습니다. 다시 입력해주세요.\n\n");
		}
	}

	return workingDay;
}

int totalCoinCal(int workingDay) {
	int sumNum = 1, sumCount = 0;
	int totalCoin = 0;

	for (int i = 0; i < workingDay; i++) {
		totalCoin += sumNum;
		sumCount++;
		
		if (sumNum == sumCount) {
			sumNum++;
			sumCount = 0;
		}
		else { ; }
	}
	return totalCoin;
}

void output(int workingDay, int totalCoin) {
	printf("  근무일 : %d 일 / 총 금화 수 : %d 개\n\n", workingDay, totalCoin);
	return;
}