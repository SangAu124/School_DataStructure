#include <stdio.h>

int fac1(int c) {//위 함수와 동일한 작업을 수행한다.
	if (c == 0)
		c = 1;
	else
		c = c * fac1(c - 1);
	return c;
}
int main() {

	for (int i = 1; i <= 50; i++) {
		printf("%d! = %d\n", i, fac1(i));
	}

	return 0;
}
