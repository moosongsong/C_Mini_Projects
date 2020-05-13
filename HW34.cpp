//작성자 : 송무송
//HW34 : 수도요금 계산 프로그램

#include<stdio.h>
#include<string.h>
int feeCal(int, int);
void output(int, int, int);
int inputInt(const char*, int);

int main() {
	int code, quantityConsumed, totalFee;
	code = inputInt("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) :", 1);
	quantityConsumed = inputInt("* 사용량을 입력하시오(ton단위) :", 2);
	totalFee = feeCal(code, quantityConsumed);
	output(code, quantityConsumed, totalFee);
	return 0;
}

int inputInt(const char* msg, int minicode) {
	int num;
	
	while (1) {
		printf(msg);
		scanf("%d", &num);

		if (getchar() == '\n') {
			if (minicode == 2) {
				if (num >= 0) {
					break;
				}
				else {
					printf("음수입니다. 다시 입력해주세요.\n");
				}
			}
			else {
				if (num >= 1 && num <= 3) {
					break;
				}
				else {
					printf("범위 밖의 수입니다. 다시 입력해주세요.\n");
				}
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("알맞지 않은 형태로 입력하셨습니다. 다시 입력해주세요.\n");
		}
	}
	return num;
}

int feeCal(int code, int quantityConsumed) {
	int totalFee;
	double tax;
	switch (code)
	{
	case 1:
		totalFee = 50 * quantityConsumed;
		break;
	case 2:
		totalFee = 45 * quantityConsumed;
		break;
	case 3:
		totalFee = 30 * quantityConsumed;
		break;
	default:
		break;
	}
	tax = totalFee * 0.05;
	totalFee = tax + totalFee;
	return totalFee;
}

void output(int code, int quantityConsumed, int totalFee) {
	char codeStr[12];
	switch (code)
	{
	case 1:
		strcpy(codeStr, "(가정용)");
		break;
	case 2:
		strcpy(codeStr, "(상업용)");
		break;
	case 3:
		strcpy(codeStr, "(공업용)");
		break;
	default:
		break;
	}
	printf("# 사용자 코드 : %d%s\n", code, codeStr);
	printf("# 사용량 : %d ton\n", quantityConsumed);
	printf("# 총 수도요금 : %d원\n", totalFee);
	return;
}