#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//typedef struct STU stu;
//struct STU {
//	char name[10];
//	int age;
//};

typedef struct STU { // �� ����ü�� ��Ȯ�� ������ ������ �����Ѵ�.
	char name[10];
	int age;
}stu;

int main() {
	// stu = 14 bite
	stu* student; // 4 bite
	student = (stu*)malloc(sizeof(stu)); // void -> ����ȯ
	// student->name = "KIM";  Ʋ��
	strcpy(student->name, "KIM");
	student->age = 17;
	// (*student).age = 17;//�� �ڵ�� ��Ȯ�� ������ ������ �����Ѵ�.

	printf("%s %d\n", student->name, student->age);

	free(student); // malloc�� ����� free�� �޸𸮿��� ����



	// ������ �̸��� ���̸� ������ ����غ�����.
	// �޸� ������ �������� �����Ͻÿ�.

	student = (stu*)malloc(sizeof(stu));
	strcpy(student->name, "KIMSANGEUN");
	student->age = 17;
	printf("%s %d\n", student->name, student->age);
	free(student);
}