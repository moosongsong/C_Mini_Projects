// �ۼ��� : �۹���
//HW27 : �ް����� ���α׷� �ۼ��ϱ�

#include<stdio.h>
int input();

int main() {
	int count = 0;
	int weight;
	while (1) {
		weight = input();
		if (weight >= 150 && weight <= 500) {
			count++;
			printf("���� �ް��� �� :%d\n", count);
		}
		else if (weight < 150) {
			printf("*���߸��� ������ �峭���� ���ÿ�~^^\n");
		}
		else {
			printf("*Ÿ���� ������ �峭���� ���ÿ�~^^\n");
		}
		if (count == 10) {
			break;
		}
	}
	printf("\n*** �ް������� �������ϴ�.\n");

	

	return 0;
}

int input() {
	int weight;
	while (1) {
		printf("# ����� ���Ը� �Է��ϼ���(���� : g) :");
		scanf("%d", &weight);
		if (getchar() == '\n') { 
			break; 
		}
		else {
			while (getchar() != '\n') { ; }
			printf("�ٽ� �Է����ּ���\n");
		}
	}
	return weight;
}