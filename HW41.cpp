// �ۼ��� : �۹���
//HW41 : �ﰢ ���ĺ� ����ϱ�

#include<stdio.h>

int main() {
	char input;
	int i, j;
	while (1) {
		printf("* ������ �빮�� �Է�('A' ~ 'Z'):");
		scanf("%c", &input);
		if (input<'A' || input>'Z') {
			break;
		}
		else {
			while (getchar() != '\n') { ; }
		}
		for (i = input; i >= 'A'; i--) {
			for (j = input; j >= i; j--) {
				printf("%c", j);
			}
			printf("\n");
		}
	}
	return 0;
}