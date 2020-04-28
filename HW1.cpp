//累己磊 : 价公价 HW1

#include<stdio.h>

void printAge(int);
void printHeight(double);

int main() {
	char name[20] = "价公价";
	int age = 500;
	double height = 170.8;

	printf("己疙 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age) {
	printf("唱捞 : %d\n", age);
	return;
}

void printHeight(double height) {
	printf("虐 : %lf\n", height);
	return;
}