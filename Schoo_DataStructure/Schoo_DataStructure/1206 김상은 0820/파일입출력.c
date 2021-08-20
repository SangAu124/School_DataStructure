#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = fopen("file.txt", "w"); // w 는 write모드
	fprintf(fp, "%s %s %d", "I", "am", 20);
//	printf("%s %s %d", "I", "am", 20);
	fclose(fp);

	fp = fopen("file.txt", "r"); // r = read모드
	char line[100];
	fgets(line, 100, fp);
	printf("%s", line);

	return 0;
}


// 시간복잡고와 공간복잡도의 의미 정리하기

// 시간복잡도
//시간 복잡도(Time Complexity)는 알고리즘의 절대적인 실행 시간을 나타내는 것이 아닌
//알고리즘을 수행하는 데 연산들이 몇 번 이루어지는 지를 숫자로 표기합니다.

// 공간 복잡도
//공간 복잡도(Space Complexity)란, 프로그램을 실행시킨 후 완료하는 데 필요로 하는 자원 공간의 양을 말합니다.
