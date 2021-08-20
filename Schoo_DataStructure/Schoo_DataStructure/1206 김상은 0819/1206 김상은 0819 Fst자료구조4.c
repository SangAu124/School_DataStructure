#include<stdio.h>

int main() {
	static int i = 7, *p, ** pp;


	p = &i;
	pp = &p;

	printf("p\'s Address = %d\n", p);
	printf("pp\'s Address = %d\n", pp);

	(*p)++;
	printf("i = %d \t", i);
	printf("*p = %d \t", *p);
	printf("**pp = %d \n", **pp);

	(**pp)++;
	printf("i = %d \t", i);
	printf("*p = %d \t", *p);
	printf("**pp = %d \t", **pp);

	return 0;

}