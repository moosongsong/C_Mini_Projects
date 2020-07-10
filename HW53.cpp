// 작성자 : 송무송
//HW53 : 회문 검사 프로그램

# include <stdio.h>
# include <string.h>

void input(char * str);
int palindromeCheck(char * str, int size);
void output(char * str, int boolean);

int main() {
	char str[10];
	int res = 1, boolean;
	int size;
	while (1) {
		input(str);
		res = strcmp(str, "end");
		if (res == 0) {
			break;
		}
		
		size = strlen(str);
		boolean = palindromeCheck(str, size);
		output(str, boolean);
	}
	return 0;
}

void input(char * str) {
	
	printf("# 단어 입력 :");
	scanf("%s", str);
	
	return;
}

int palindromeCheck(char * str, int size) {
	int boolean = -1, i;

	for (i = 0; i < size / 2; i++) {
		if ( (str[i] == str[size - 1 - i]) || (str[i] == (str[size - 1 - i]+32) ) || (str[i] == (str[size - 1 - i] - 32))) {
			boolean = 1;
		}
		else {
			boolean = 0;
		}
		if (boolean == 0) {
			break;
		}
		else { ; }
	}
	return boolean;
}

void output(char * str, int boolean) {
	if (boolean == 1) {
		printf("  \"%s\" : 회문입니다!\n\n", str);
	}
	else {
		printf("  \"%s\" : 회문이 아닙니다!\n\n", str);
	}
	return;
}