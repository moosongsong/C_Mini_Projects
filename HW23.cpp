//�ۼ��� : �۹��� HW23

#include<stdio.h>

int main() {
	int num1, num2, res, gap;

	while (1) {
		printf("# �ΰ��� ������ �Է��ϼ��� :");
		res = scanf("%d%d", &num1, &num2);
		if (res != 2) {
			break;
		}
		if (num1 >= num2) {
			gap = num1 - num2;
			printf("%d - %d = %d\n", num1, num2, gap);
		}
		else {
			gap = num2 - num1;
			printf("%d - %d = %d\n", num2, num1, gap);
		}
	}
	
	return 0;
}