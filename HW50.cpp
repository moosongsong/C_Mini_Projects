// �ۼ��� : �۹���
//HW49 : �迭 ���� �����͸� �������� �����ϱ�

# include <stdio.h>
# include <string.h>

void input(char * str, char * ch);
int strcheck(char * str, char ch);

int main() {
	char str[100];
	char ch;
	int i, res;
	for (i = 0; i < 3; i++) {
		input(str, &ch);
		res = strcheck(str, ch);
		
		printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� ", str, ch);
		if (res == -1) {
			printf("�������� �ʽ��ϴ�.\n");
		}
		else {
			printf(" %d�� ��ġ�� �����մϴ�.\n", res);
		}
		printf("\n");
	}
	
	return 0;
}

void input(char * str, char * ch) {
	int i;

	printf("# ���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", str);
	while (getchar() != '\n') { ; }
	printf("# ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", ch);
	while (getchar() != '\n') { ; }
	return;
}

int strcheck(char * str, char ch) {
	int index = -1, i;
	int len = strlen(str);
	for (i = 0; i < len; i++) {
		if (ch == str[i]) {
			index = i;
			break;
		}
	}
	return index;
}