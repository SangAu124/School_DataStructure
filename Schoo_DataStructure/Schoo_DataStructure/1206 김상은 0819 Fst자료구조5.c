#include <stdio.h>

int main() {
	char string[] = "Hello";

	char* pstr = string;

	while (*pstr) {// A == &A[0]
		putchar(*pstr++);
	}

	return 0;
}