//�ۼ��� : �۹���
//HW38 : ������ �ݾ����� ���� �����ϱ�

#include<stdio.h>
#define CREAM_BREAD 500
#define SHRIMP_SNACK 700
#define COKE 400

int main() {
	int money;
	int boolean = 0;
	while (1) {
		printf("���� ����� ���� �ݾ� �Է� :");
		scanf("%d", &money);
		if (getchar() != '\n') {
			break;
		}
		for (int i = CREAM_BREAD; i < money; i += CREAM_BREAD) {
			for (int j = SHRIMP_SNACK; j < money; j += SHRIMP_SNACK) {
				for (int k = COKE; k < money; k += COKE) {
					if (i + j + k == money) {
						printf("ũ����(%d��), �����(%d����), �ݶ�(%d��)\n", i / CREAM_BREAD, j / SHRIMP_SNACK, k / COKE);
						boolean = 1;
					}
					else {
						continue;
					}
				}
			}
		}
		if (boolean == 1) {
			printf("��� �����Ͻðڽ��ϱ�?\n\n");
			boolean = 0;
		}
		else {
			printf("���� �� �����ϴ�. �ٽ� �Է����ּ���.\n\n");
		}
		
	}

	return 0;
}