// �ۼ��� : �۹���
//HW28 : ���� ������ ī��Ʈ ���α׷�(getchar()�Լ� �̿�)

#include<stdio.h>

int main() {
	int englishCount = 0, numberCount = 0, spaceCount = 0, etcCount = 0;
	char ch;
	printf("# ���� ������ �Է��Ͻÿ� :\n");
	while (1) {
		ch = getchar();
		if (ch == EOF) {
			break;
		}
		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z')) {
			englishCount++;
		}
		else if (ch >= '0'&&ch <= '9') {
			numberCount++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			spaceCount++;
		}
		else {
			etcCount++;
		}
	}
	printf("* ������ ��ҹ��� ���� : %d��\n", englishCount);
	printf("* ���ڹ��� ���� : %d��\n", numberCount);
	printf("* ���鹮��(space, tab, enter) ���� : %d��\n", spaceCount);
	printf("* �� �� ��Ÿ���� ���� : %d��\n", etcCount);

	return 0;
}