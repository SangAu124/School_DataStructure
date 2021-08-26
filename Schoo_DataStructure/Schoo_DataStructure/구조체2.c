#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//typedef struct STU stu;
//struct STU {
//	char name[10];
//	int age;
//};

typedef struct STU { // 위 구조체와 정확히 동일한 동작을 수행한다.
	char name[10];
	int age;
}stu;

int main() {
	// stu = 14 bite
	stu* student; // 4 bite
	student = (stu*)malloc(sizeof(stu)); // void -> 형변환
	// student->name = "KIM";  틀림
	strcpy(student->name, "KIM");
	student->age = 17;
	// (*student).age = 17;//위 코드와 정확이 동일한 동작을 수행한다.

	printf("%s %d\n", student->name, student->age);

	free(student); // malloc로 만들고 free로 메모리에서 해제



	// 여러분 이름과 나이를 저장해 출력해보세요.
	// 메모리 공간을 동적으로 생산하시오.

	student = (stu*)malloc(sizeof(stu));
	strcpy(student->name, "KIMSANGEUN");
	student->age = 17;
	printf("%s %d\n", student->name, student->age);
	free(student);
}