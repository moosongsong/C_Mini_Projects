// �ۼ��� : �۹���
//HW31 : ������� ����� ���� ���α׷�

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
		printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", remain);
		menuNum = menu();
		if (menuNum == 'i') {
			money = inputInt("# �Աݾ��� �Է��ϼ���:");
			deposit(money, &remain);
		}
		else if (menuNum == 'o') {
			money = inputInt("# ��ݾ��� �Է��ϼ���:");
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
		printf("# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����):");
		scanf(" %c", &menuNum);
		if (getchar() == '\n') {
			if (menuNum == 'i' || menuNum == 'o' || menuNum == 'q') {
				break;
			}
			else {
				printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
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
		printf("* �ܾ��� �����մϴ�.\n");
	}
	return ;
}