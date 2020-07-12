// �ۼ��� : �۹���
//HW57 : �迭�� �κ��� ���ϱ�

# include <stdio.h>
# include<string.h>

void inputStr(char(*str)[20]);
void output(char(*str)[20], char * firstP, char * lastP);
void findFirstLast(char(*str)[20], char * firstP, char * lastP);

int main() {
	char str[5][20];
	char first[5];
	char last[5];
	inputStr(str);
	findFirstLast(str, first, last);
	output(str, first, last);
	return 0;
}

void inputStr(char(*str)[20]) {
	for (int i = 0; i < 5; i++) {
		printf("# %d�� ���ڿ��� �Է��Ͻÿ� :", i+1);
		scanf("%s", str[i]);
	}
	return;
}

void findFirstLast(char(*str)[20], char * firstP, char * lastP) {
	int len;
	for (int i = 0; i < 5; i++) {
		len = strlen(str[i]);
		firstP[i] = str[i][0];
		lastP[i] = str[i][len - 1];
	}
	return;
}

void output(char(*str)[20], char * firstP, char * lastP) {
	for (int i = 0; i < 5; i++) {
		printf("str[%d] = %s  %c %c\n", i, str[i], firstP[i], lastP[i]);
	}
	return;
}