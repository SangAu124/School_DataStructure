#include <stdio.h>

int fac(int c) {
	return ((c == 0) ? 1 : c * fac(c - 1)); // 0 나올때 까지 C * C-1
}

int fac1(int c) {//위 함수와 동일한 작업을 수행한다.
	if (c == 0)
		c = 1;
	else 
		c = c * fac1(c - 1);
	return c;
}

//int fac2(int c) {
//	int a = 0;
//	for (int i = c; i > 0; i--) {
//		a = i * c;
//	}
//	return a;
//}

int main() {
	
	for (int i = 1; i <= 50; i++) {
		printf("%d! = %d\n", i, fac1(i));
	}

	return 0;
}