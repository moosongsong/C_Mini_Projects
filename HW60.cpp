// 작성자 : 송무송
//HW60 : 주민등록번호 유효성 검사 프로그램

# include <stdio.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 
int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);

int main()
{
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418" };
	int i, count;
	
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i<count; i++)
	{
		if (availabilityCheck(resident_number[i]) == TRUE)
		{
			printf("(+) 주민번호%s는(은) 유효한 번호입니다.\n", resident_number[i]);
		}
		else
		{
			printf("(-) 주민번호%s는(은) 유효하지 않은 번호입니다.\n", resident_number[i]);
		}
	}
	return 0;
}

int availabilityCheck(char *resident_number) {
	if (checkLengthCharacter(resident_number) && checkDate(resident_number) 
		&& checkGender(resident_number) && checkIdentification(resident_number)) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int checkLengthCharacter(char *resident_number) {
	int count = 0;
	int i;
	for (i = 0; i < 20; i++) {
		if (resident_number[i] >= '0' && resident_number[i] <= '9') {
			count++;
		}
	}
	if (count == RESIDENT_NUMBER_LENGTH) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int checkDate(char *resident_number) {
	int year, month, day;
	int monthAry[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	year = (resident_number[0]-'0') * 10 + (resident_number[1]-'0');
	month = (resident_number[2]-'0') * 10 + (resident_number[3]-'0');
	day = (resident_number[4]-'0') * 10 + (resident_number[5]-'0');

	if (resident_number[6] == '1' || resident_number[6] == '2') {
		year += 1900;
	}
	else if (resident_number[6] == '3' || resident_number[6] == '4') {
		year += 2000;
	}
	else { ; }

	if (year >= 0 && month > 0 && day > 0 && month < 13) {
		if (checkYear(year) == TRUE) {
			monthAry[1] = 29;
		}
		else { ; }
		if (day <= monthAry[month - 1]) {
			return TRUE;
		}
		else { 
			return FALSE;
		}
	}
	else {
		return FALSE;
	}
}

int checkGender(char *resident_number) {
	if (resident_number[6] >= '1' && resident_number[6] <= '4') {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int checkIdentification(char *resident_number) {
	int resident[13];
	int i, sum = 0;
	for (i = 0; i < RESIDENT_NUMBER_LENGTH; i++) {
		resident[i] = resident_number[i] - '0';
		if (i != RESIDENT_NUMBER_LENGTH - 1) {
			sum += resident[i];
		}
	}
	if ((sum % 10) == resident[RESIDENT_NUMBER_LENGTH-1]) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int checkYear(int year) {
	int boolean;
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return TRUE;
			}
			else {
				return FALSE;
			}
		}
		else {
			return TRUE;
		}
	}
	else {
		return FALSE;
	}
}