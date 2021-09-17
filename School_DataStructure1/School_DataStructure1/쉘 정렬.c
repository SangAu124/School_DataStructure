#include <stdio.h>

//Shell정렬 -> 삽입정렬을 보완한 알고리즘

void shellSort(int arr[], int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) { // gap = gap / 2
		//if(!(gap % 2)) gap++ // 짝수면 홀수로
		for (int i = gap; i < n; i++) { // 삽입정렬 응용
			int tmp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap) {
				arr[j] = arr[j - gap];
			}
			arr[j] = tmp;
		}
	}
}

int main() {
	//10개 데이터를 쉘 정렬하는 법을 말해보자

	int arr[] = { 1, 9, 15, 12, 3, 7, 5, 8, 11, 2 };
	int n = sizeof(arr) / sizeof(int);
	printf("%d개의 수를 정렬\n", n);
	shellSort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
} 