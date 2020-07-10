// �ۼ��� : �۹���
//HW52 : ���� �� ��Ʈ ���α׷�(1���� �迭 ���)

# include <stdio.h>

FILE * fileOpen(const char * filename, const char * mode);
int fileRead(FILE * fp, int * dataArray);
void sorting(int * dataArray, int dataCount);
void showArray(const char * msg, int * dataArray, int dataCount);

int main() {
	int testCnt;
	int dataCnt;
	int dataArray[100];
	int colCount[100] = { 0 };
	int i, j;
	FILE * fp;
	fp = fileOpen("c:\\data\\hw52_sortData.txt", "rt");
	if (fp == NULL) {
		return 1;
	}

	fscanf(fp, "%d", &testCnt);

	for (i = 0; i < testCnt; i++) {
		dataCnt = fileRead(fp, dataArray);

		showArray("# ��Ʈ �� ������ :", dataArray, dataCnt);
		sorting(dataArray, dataCnt);
		showArray("# ��Ʈ �� ������ :", dataArray, dataCnt);

		printf("\n");
	}
	fclose(fp);
	return 0;
}

FILE * fileOpen(const char * filename, const char * mode) {
	FILE *fp;
	if ((fp = fopen(filename, mode)) == NULL) {
		printf("File open error!\n");
	}
	return fp;
}
int fileRead(FILE * fp, int * dataArray) {
	int dataCnt = 0;
	while (1) {
		fscanf(fp, "%d", &dataArray[dataCnt]);
		if (dataArray[dataCnt] == 0)
			break;
		dataCnt++;
	}
	return dataCnt;
}

void sorting(int * dataArray, int dataCount) {
	int temp;

	for (int j = 0; j<dataCount; j++)	{
		for (int k = 0; k<dataCount-1; k++)	{
			if (dataArray[k] > dataArray[k + 1]) {
				temp = dataArray[k];
				dataArray[k] = dataArray[k + 1];
				dataArray[k + 1] = temp;
			}
		}
	}
	return;
}

void showArray(const char * msg, int * dataArray, int dataCount) {
	printf(msg);
	for (int j = 0; j < dataCount; j++) {
		printf("%5d", dataArray[j]);
	}
	printf("\n");
	return;
}
