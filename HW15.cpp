//작성자 : 송무송 HW15

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
	printf("몸무게를 입력하세요(kg):");
	scanf("%d", &weight);
	return weight;
}

double inputH() {
	double height;
	printf("키를 입력하세요(m):");
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
		printf("당신의 BMI는 %.1Lf으로 저체중입니다.\n", bmiRate);
	else if(bmiRate<25.0)
		printf("당신의 BMI는 %.1Lf으로 정상체중입니다.\n", bmiRate);
	else if (bmiRate<30.0)
		printf("당신의 BMI는 %.1Lf으로 과체중입니다.\n", bmiRate);
	else if (bmiRate<40.0)
		printf("당신의 BMI는 %.1Lf으로 비만니다.\n", bmiRate);
	else
		printf("당신의 BMI는 %.1Lf으로 고도비만입니다.\n", bmiRate);
	return;
}