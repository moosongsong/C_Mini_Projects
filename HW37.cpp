// �ۼ��� : �۹���
//HW37 : Ȳ�ݵ���

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
		printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� :");
		scanf("%d", &workingDay);
		if (getchar() == '\n') {
			if (workingDay >= 0) {
				break;
			}
			else {
				printf("������ �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n\n");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n\n");
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
	printf("  �ٹ��� : %d �� / �� ��ȭ �� : %d ��\n\n", workingDay, totalCoin);
	return;
}