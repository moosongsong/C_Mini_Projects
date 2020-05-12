// �ۼ��� : �۹���
//HW33 : ȯǳ�� ���� ���α׷�

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
	printf("1. ȯǳ�� ���� / ");
	printf("2. ȯǳ�� �ݱ� / ");
	printf("3. ȯǳ�� ��ü ��ȯ / ");
	printf("4. ���� : ");
	while (1) {
		scanf("%d", &menuNum);
		if (getchar() == '\n') {
			if (menuNum >= 1 && menuNum <= 4) {
				break;
			}
			else {
				printf("  �޴��� �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ��� : ");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("  �޴��� �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ��� : ");
		}
	}
	printf("----------------------------------------------------------------------\n");
	return menuNum;
}

void openFan(unsigned char * fanP) {
	int fanNum;
	unsigned char compare = 1;
	printf("                      Fan ���� �۾� ���� ȭ��\n");
	printf("----------------------------------------------------------------------\n");
	printf("* OPEN�� FAN��ȣ�� �Է��Ͻÿ�(1-8) :");
	while (1) {
		scanf("%u", &fanNum);
		if (getchar() == '\n') {
			if (fanNum >= 1 && fanNum <= 8) {
				break;
			}
			else {
				printf("  ��ȣ�� �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ��� : ");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("  ��ȣ�� �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ��� : ");
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
	printf("                      Fan �ݱ� �۾� ���� ȭ��\n");
	printf("----------------------------------------------------------------------\n");
	printf("* CLOSE�� FAN��ȣ�� �Է��Ͻÿ�(1-8) :");
	while (1) {
		scanf("%u", &fanNum);
		if (getchar() == '\n') {
			if (fanNum >= 1 && fanNum <= 8) {
				break;
			}
			else {
				printf("  ��ȣ�� �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ��� : ");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("  ��ȣ�� �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ��� : ");
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
	printf("                    Fan ��ü ��ȯ �۾� ���� ȭ��\n");
	printf("----------------------------------------------------------------------\n");
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�.(ON,OFF ���� �ڹٲ�)\n");
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
		printf("%d�� FAN  ", 8 - i);
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