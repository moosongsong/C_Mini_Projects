// �ۼ��� : �۹���
//HW29 : ������

#include<stdio.h>

int inputUInt(const char*);
int transNumber(int);

int main() {
	int start, last, num, temp, count=0, minicount;
	start = inputUInt("���� ��(P1) :");
	last = inputUInt("�� ��(P2) :");
	num = inputUInt("������(N) :");
	printf("�������� %d�� ���� ���\n", num);
	for (int i = start; i <= last; i++) {
		minicount = 0;
		temp = i;
		while (temp >= 10) {
			temp = transNumber(temp);
			minicount++;
		}
		if (minicount == 5) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("�� ���� : %d��\n", count);

	return 0;
}

int inputUInt(const char* msg) {
	int num;
	while (1) {
		printf(msg);
		scanf("%d", &num);
		if (getchar() == '\n') {
			if (num > 0) {
				break;
			}
			else {
				printf("������ �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
			}
		}
		else {
			while (getchar() != '\n') { ; }
			printf("�߸��� �������� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
		}
	}
	return num;
}

int transNumber(int num) {
	int transNum=1;
	int len=0, temp1, temp2;
	temp1 = num;
	temp2 = num;
	while (temp1 != 0) {
		temp1 /= 10;
		len++;
	}
	for (int i = 0; i < len; i++) {
		transNum *= temp2 % 10;
		temp2 = temp2 / 10;
	}
	
	return transNum;
}