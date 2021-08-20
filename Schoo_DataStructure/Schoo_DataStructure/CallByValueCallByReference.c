//Call By Value
//Call By Reference

// !!! 중요 !!!
#include <stdio.h>

void swap1(int a, int b) {// call by value
	int t = a; a = b; b = t;
}

void swap2(int* a, int* b) {// call by reference
	int t = *a; *a = *b; *b = t;
}

int main() {
	int a = 5, b = 7;
	printf("a = %d, b = %d\n", a, b);

	swap1(a, b);
	printf("a = %d, b = %d\n", a, b);// 5, 7 출력

	swap2(&a, &b);
	printf("a = %d, b = %d\n", a, b);// 7, 5 출력
}

