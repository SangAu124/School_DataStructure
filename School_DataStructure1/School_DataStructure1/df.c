#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
 // 이분 탐색, 이진 탐색 : 정렬된 배열 속 데이터 찾기

int S[100] = { 5, 7, 33, 66, 67, 88, 99, 120, 134, 156, 201 };
int n, k; // k 는 내가 찾을 숫자
int binaryserch(int s, int e) { // start, end
	while (s <= e) {
		int m = (s + e) / 2; // m : middle
		if (S[m] == k)
			return m; // 찾은 배열의 인덱스(위치)
		if (S[m] > k)
			e = m - 1;
		else
			s = m + 1;
	}
	return -1; // 못찾았다.
}

int main() {

	printf("찾을 숫자 입력 : ");
	scanf("%d", &k);

	k = 66;
	printf("%d번째에서 발견\n", binaryserch(0, 10) );
}
