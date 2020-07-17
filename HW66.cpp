// 작성자 : 송무송
//HW66 : 가변 배열 만들기

# include <stdio.h>
#include <malloc.h>
#include <string.h>
#define ROW 5

void input(char ** chPPtr);
void sorting(char ** chPPtr);
void output(char ** chPPtr);
void free(char ** chPPtr);

int main() {
	char *p[ROW];
	input(p);
	sorting(p);
	output(p);
	free(p);
	return 0;
}

void input(char ** chPPtr) {
	int i, stLen;
	char temp[1000];

	for (i = 0; i < ROW; i++) {
		printf("# 문자열 %d:", i + 1);
		scanf("%s", temp);
		stLen = strlen(temp) + 1;
		chPPtr[i] = (char*)malloc(sizeof(char)*stLen);
		strcpy(chPPtr[i], temp);
	}

	return;
}

void sorting(char ** chPPtr) {
	int i, j;
	char * temp;
	for (i = 0; i < (ROW - 1); i++) {
		for (j = i + 1; j < ROW; j++) {
			if (strcmp(chPPtr[i], chPPtr[j]) > 0) {
				temp = chPPtr[i];
				chPPtr[i] = chPPtr[j];
				chPPtr[j] = temp;
			}
			else { ; }
		}
	}
	return;
}

void output(char ** chPPtr) {
	int i;
	for (i = 0; i < ROW; i++) {
		printf("%d. %s\n", i + 1, chPPtr[i]);
	}
	return;
}

void free(char ** chPPtr) {
	int i;
	for (i = 0; i < ROW; i++) {
		if (*(chPPtr + i) != NULL) {
			free(*(chPPtr + i));
		}
		else { ; }
	}
	return;
}
