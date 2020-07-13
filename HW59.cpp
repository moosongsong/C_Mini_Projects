// �ۼ��� : �۹���
//HW59 : ���� �ٸ� ���� ���� ����ϱ�

# include <stdio.h>

int inputOne(const char * msg, int * toNum);
int inputTwo(int toNum, int * num);

int main() {
	int toNum;
	int num[1000];
	int res;
	while (1) {
		res = inputOne("* �Է��� ������ ���� :", &toNum);
		if (res == 0) {
			break;
		}
		res = inputTwo(toNum, num);
		printf("  ���� �ٸ� ������ ���� : %d\n\n", res);
	}

	return 0;
}

int inputOne(const char * msg, int * toNum) {
	int boolean = 1;

	while (1) {
		printf(msg);
		scanf("%d", toNum);
		if (getchar() == '\n') {
			if (*toNum >= 2 && *toNum <= 1000) {
				break;
			}
			else {
				printf("���� ������ ���� �ʽ��ϴ�. �ٽ� �Է����ּ���.\n");
			}
			boolean = 1;
		}
		else {
			while (getchar() != '\n') { ; }
			boolean = 0;
			break;
		}
	}
	
	return boolean;
}

int inputTwo(int toNum, int * num) {
	int count = 0, j;
	printf("* �����Է�:");
	for (int i = 0; i < toNum; i++) {
		scanf("%d", &num[i]);
		for (j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				break;
			}
			else { ; }
		}
		if (i == j) {
			count++;
		}
		else { ; }
	}
	return count;
}