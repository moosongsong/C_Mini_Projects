// 작성자 : 송무송
//HW45 : move box 프로그램

# include <stdio.h>
#include<Windows.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

void gotoxy(int x, int y);
void inputXY(int * sx, int * sy, int * ex, int * ey);
void makeRec(int * sx, int * sy, int * ex, int * ey);
int moveBox(int * sx, int * sy, int * ex, int * ey);

int main() {
	int sx, sy, ex, ey, res;
	inputXY(&sx, &sy, &ex, &ey);
	makeRec(&sx, &sy, &ex, &ey);
	while (1) {
		res = moveBox(&sx, &sy, &ex, &ey);
		if (res == FALSE) {
			break;
		}
		makeRec(&sx, &sy, &ex, &ey);
	}

	gotoxy(79, 25);
	return 0;
}

void gotoxy(int x, int y) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void inputXY(int * sx, int * sy, int * ex, int * ey) {
	char str [4][3] = { "sx", "ex", "sy", "ey" };
	int min[4] = { 0,31,0,11 };
	int max[4] = { 70, 79, 20, 23 };
	int * xyStr[4] = { sx,ex,sy,ey };
	int i;
	for (i = 0; i < 4; i++) {
		printf("%s 좌표입력(%d~%d) :", str[i], min[i], max[i]);
		scanf("%d", xyStr[i]);
		if ((*xyStr[i] >= min[i]) && (*xyStr[i] <= max[i])) {
			if (i == 1 || i == 3) {
				if (*xyStr[i-1] >= *xyStr[i]) {
					i--;
				}
			}
		}
		else {
			i--;
		}
		while (getchar() != '\n') { ; }
	}
	return;
}

void makeRec(int * sx, int * sy, int * ex, int * ey) {
	int width, height, i, j, temp;
	width = *ex - *sx;
	height = *ey - *sy;
	temp = *sy;
	system("cls");
	gotoxy(*sx, *sy);



	for (i = 0; i < height; i++) {
		if (i == 0 || i == (height - 1)) {
			for (j = 0; j < width; j++) {
				printf("*");
			}
		}
		else {
			printf("*");
			for (j = 0; j < width - 2; j++) {
				printf(" ");
			}
			printf("*");
		}
		gotoxy(*sx, ++temp);
	}

	return;
}

int moveBox(int * sx, int * sy, int * ex, int * ey) {
	char ch;
	
	while (1) {
		ch = getch();
		if (ch == 'w') {
			*sy -= 1;
			*ey -= 1;
			return TRUE;
		}
		else if (ch == 'a') {
			*sx -= 1;
			*ex -= 1;
			return TRUE;
		}
		else if (ch == 'd') {
			*sx += 1;
			*ex += 1;
			return TRUE;
		}
		else if (ch == 's') {
			*sy += 1;
			*ey += 1;
			return TRUE;
		}
		else if (ch == 27) {
			return FALSE;
		}
		else { return TRUE; }
	}
}