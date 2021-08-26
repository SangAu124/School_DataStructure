#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 구조체란 무엇일까?
// 구조체 = 종합선물세트
// 구조체 -> 클래스(붕어빵틀) -> 객체(붕어빵)

typedef struct stu Stu;
struct stu {
	// 학생이름, 나이, 성적
	char name[10]; // 멤버 변수, 필드
	int age;
	int score;
};


int main() { // s1.age
	Stu s1 = { "KIM", 17, 90 };
	Stu s2 = { "PARK", 17, 80 };
	// 고조체 변수를 초기화
	// 문제 : 구조체를 출력해보세요.

	printf("%s %d %d\n", s1.name, s1.age, s1.score);
	printf("%s %d %d\n", s2.name, s2.age, s2.score);

}