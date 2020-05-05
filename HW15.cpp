//�ۼ��� : �۹��� HW15

#include<stdio.h>

int inputW();
double inputH();
double calBMI(int, double);
void output(double);

int main() {
	int weight=inputW();
	double height = inputH(); 
	double bmiRate=calBMI(weight, height);
	output(bmiRate);
	return 0;
}

int inputW() {
	int weight;
	printf("�����Ը� �Է��ϼ���(kg):");
	scanf("%d", &weight);
	return weight;
}

double inputH() {
	double height;
	printf("Ű�� �Է��ϼ���(m):");
	scanf("%Lf", &height);
	return height;
}

double calBMI(int weight, double height) {
	double bmiRate;
	bmiRate = weight / (height*height);
	return bmiRate;
}

void output(double bmiRate) {
	if (bmiRate < 18.5)
		printf("����� BMI�� %.1Lf���� ��ü���Դϴ�.\n", bmiRate);
	else if(bmiRate<25.0)
		printf("����� BMI�� %.1Lf���� ����ü���Դϴ�.\n", bmiRate);
	else if (bmiRate<30.0)
		printf("����� BMI�� %.1Lf���� ��ü���Դϴ�.\n", bmiRate);
	else if (bmiRate<40.0)
		printf("����� BMI�� %.1Lf���� �񸸴ϴ�.\n", bmiRate);
	else
		printf("����� BMI�� %.1Lf���� �����Դϴ�.\n", bmiRate);
	return;
}