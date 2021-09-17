#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insertionSort(int arr[], int n) {
	//삽입정렬, arr는 배열의 이름
	int i, j, tmp;
	for (i = 1; i < n; i++) {
		tmp = arr[i]; // tmp의 값이 배열의 정확한 위치에 삽입
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
			arr[j + 1] = arr[j]; // 배열 앞의 값이 뒤로 이동
		arr[j + 1] = tmp;
	}
}

int main() {

	int list[] = { 3, 4, 1, 8, 9 };
	int n = sizeof(list) / sizeof(int);
	insertionSort(list, n);
	for (int i = 0; i < 5; i++)
		printf("%d ", list[i]);

	return 0;
}