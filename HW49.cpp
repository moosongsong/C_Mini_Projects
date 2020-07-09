// 작성자 : 송무송
//HW49 : 배열 내의 데이터를 역순으로 저장하기

#include <stdio.h>

void swap(int * num, int size);

int main() {
	int num[] = { 3,5,2,1,4 };
	int i;
	int size = sizeof(num) / sizeof(num[0]);
	printf("처음 배열에 저장된 값 :");
	for (i = 0; i < size; i++) {
		printf("%3d", num[i]);
	}
	swap(num, size);
	printf("\n바뀐 배열에 저장된 값 :");
	for (i = 0; i < size; i++) {
		printf("%3d", num[i]);
	}
	return 0;
}

void swap(int * num, int size) {
	int temp, i;
	
	for (i = 0; i < size / 2; i++) {
		temp = num[i];
		num[i] = num[size - 1 - i];
		num[size - 1 - i] = temp;
	}
	return;
}