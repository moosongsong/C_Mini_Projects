// 작성자 : 송무송
//HW49 : 배열 내의 데이터를 역순으로 저장하기

# include <stdio.h>
# include <string.h>

void input(char * str, char * ch);
int strcheck(char * str, char ch);

int main() {
	char str[100];
	char ch;
	int i, res;
	for (i = 0; i < 3; i++) {
		input(str, &ch);
		res = strcheck(str, ch);
		
		printf("\"%s\"문자열 안에 '%c'문자는 ", str, ch);
		if (res == -1) {
			printf("존재하지 않습니다.\n");
		}
		else {
			printf(" %d번 위치에 존재합니다.\n", res);
		}
		printf("\n");
	}
	
	return 0;
}

void input(char * str, char * ch) {
	int i;

	printf("# 문자열을 입력하시오 : ");
	scanf("%s", str);
	while (getchar() != '\n') { ; }
	printf("# 문자를 입력하시오 : ");
	scanf("%c", ch);
	while (getchar() != '\n') { ; }
	return;
}

int strcheck(char * str, char ch) {
	int index = -1, i;
	int len = strlen(str);
	for (i = 0; i < len; i++) {
		if (ch == str[i]) {
			index = i;
			break;
		}
	}
	return index;
}