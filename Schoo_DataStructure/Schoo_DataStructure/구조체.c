#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����ü�� �����ϱ�?
// ����ü = ���ռ�����Ʈ
// ����ü -> Ŭ����(�ؾƲ) -> ��ü(�ؾ)

typedef struct stu Stu;
struct stu {
	// �л��̸�, ����, ����
	char name[10]; // ��� ����, �ʵ�
	int age;
	int score;
};


int main() { // s1.age
	Stu s1 = { "KIM", 17, 90 };
	Stu s2 = { "PARK", 17, 80 };
	// ����ü ������ �ʱ�ȭ
	// ���� : ����ü�� ����غ�����.

	printf("%s %d %d\n", s1.name, s1.age, s1.score);
	printf("%s %d %d\n", s2.name, s2.age, s2.score);

}