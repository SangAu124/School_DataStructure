#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 1

static int i = 7; // ���� �������� -> �޸��� ������ ������ ����
void func1();		void func2();

int main() {
	int i = 5;
	func1();
	i++; // i -> 6
	printf("i = %d\n", i); // 6 ���
	return 0;
}

void func1() {
	i++; // i -> 8
	printf("func1 i = %d\n", i); // 8 ���
	func2();
}

void func2() {
	i++; // i -> 9
	printf("func2 i = %d\n", i); // 9 ���
}

#endif
