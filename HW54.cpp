// �ۼ��� : �۹���
//HW54 : ���ڿ� ���� ������ �� ���ϱ�

# include <stdio.h>
# include <string.h>

void input(char * str); 
void output(char * str, int totalNum);
int findTotalNum(char * str, int size, int * boolean);

int main() {
	char str[100];
	int boolean[100] = { 10 };
	int totalNum, res, size;

	for (int i = 0; i < 100; i++) {
		boolean[i] = 10;
	}

	while (1) {
		input(str);
		res = strcmp(str, "end");
		if (res == 0) {
			break;
		}
		size = strlen(str);
		totalNum = findTotalNum(str, size, boolean);
		output(str, totalNum);
	}

	return 0;
}

void input(char * str) {

	printf("# ������ �Է��Ͻÿ� :");
	scanf("%s", str);

	return;
}

int findTotalNum(char * str, int size, int * boolean) {
	int sum = 0;
	int temp = 0;
	int miniboolean[100];

	for (int i = 0; i < size; i++) {
		if ('0' <= str[i] && str[i] <= '9') {
			boolean[i] = str[i] - '0';
			miniboolean[i] = 1;
		}
		else {
			miniboolean[i] = 0;
		}
	}
	miniboolean[size] = 0;

	for (int i = 0; i < size; i++) {
		
		if (miniboolean[i] == 1) {

			if ((miniboolean[i - 1] == 1)) {
				boolean[i] = boolean[i - 1] * 10 + boolean[i];
			}

			if (miniboolean[i + 1] == 0) {
				sum += boolean[i];
			}
		}
	}
	return sum;
}

void output(char * str, int totalNum) {
	printf("\"%s\" ���� �� ���ڴ� [%d]�Դϴ�.\n\n", str, totalNum);
	return;
}
