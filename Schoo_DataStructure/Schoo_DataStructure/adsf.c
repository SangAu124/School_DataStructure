#include <stdio.h>

int fac1(int c) {//�� �Լ��� ������ �۾��� �����Ѵ�.
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
