#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = fopen("file.txt", "w"); // w �� write���
	fprintf(fp, "%s %s %d", "I", "am", 20);
//	printf("%s %s %d", "I", "am", 20);
	fclose(fp);

	fp = fopen("file.txt", "r"); // r = read���
	char line[100];
	fgets(line, 100, fp);
	printf("%s", line);

	return 0;
}


// �ð������� �������⵵�� �ǹ� �����ϱ�

// �ð����⵵
//�ð� ���⵵(Time Complexity)�� �˰����� �������� ���� �ð��� ��Ÿ���� ���� �ƴ�
//�˰����� �����ϴ� �� ������� �� �� �̷������ ���� ���ڷ� ǥ���մϴ�.

// ���� ���⵵
//���� ���⵵(Space Complexity)��, ���α׷��� �����Ų �� �Ϸ��ϴ� �� �ʿ�� �ϴ� �ڿ� ������ ���� ���մϴ�.
