//�ۼ��� : �۹��� HW18

#include<stdio.h>

int inputAge();
int inputNum();
void output(int, int,int);

int main() {
	int age, num, enter=0, discount=0, total=0;
	age = inputAge();
	num = inputNum();
	if (age <= 7) {
		enter = 500;
	}
	else if (age <= 13) {
		enter = 700;
	}
	else if (age <= 19) {
		enter = 1000;
	}
	else if (age <= 55) {
		enter = 1500;
	}
	else {
		enter = 500;
	}
	enter = enter * num;

	if (num >= 5) {
		discount = (int)(enter * 0.1);
		total = enter - discount;
	}
	else {
		total = enter;
	}

	output(enter, discount, total);

	return 0;
}

int inputAge() {
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� :");
	scanf("%d", &age);

	return age;
}

int inputNum() {
	int num;
	printf("���尴�� ���� �Է��Ͻÿ� :");
	scanf("%d", &num);

	return num;
}

void output(int enter, int discount, int total) {
	printf("����� => %d��\n", enter);
	printf("���αݾ� => %d��\n", discount);
	printf("�����ݾ� => %d��\n", total);

	return;
}