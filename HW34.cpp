//�ۼ��� : �۹���
//HW34 : ������� ��� ���α׷�

#include<stdio.h>
#include<string.h>
int feeCal(int, int);
void output(int, int, int);
int inputInt(const char*, int);

int main() {
	int code, quantityConsumed, totalFee;
	code = inputInt("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) :", 1);
	quantityConsumed = inputInt("* ��뷮�� �Է��Ͻÿ�(ton����) :", 2);
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
					printf("�����Դϴ�. �ٽ� �Է����ּ���.\n");
				}
			}
			else {
				if (num >= 1 && num <= 3) {
					break;
				}
				else {
					printf("���� ���� ���Դϴ�. �ٽ� �Է����ּ���.\n");
				}
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("�˸��� ���� ���·� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
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
		strcpy(codeStr, "(������)");
		break;
	case 2:
		strcpy(codeStr, "(�����)");
		break;
	case 3:
		strcpy(codeStr, "(������)");
		break;
	default:
		break;
	}
	printf("# ����� �ڵ� : %d%s\n", code, codeStr);
	printf("# ��뷮 : %d ton\n", quantityConsumed);
	printf("# �� ������� : %d��\n", totalFee);
	return;
}