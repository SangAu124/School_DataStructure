#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
//int n = sizeof(arr) / sizeof(int);
int n = 10;
	
void quickSort(int arr[], int left ,int right) { 
	if (left >= right) { // 정렬할 데이터 수 1의 경우
		return;
	}
	int pivot = left; // 피봇을 맨 왼쪽으로 설정한 경우
	int i = left + 1; // i는 피봇 바로 오른쪽
	int j = right;	  // j는 맨 오른쪽
	int temp;

	while (i <= j) { // i가 j이하 일 때까지
		while (arr[i] <= arr[pivot]) // i의 값이 피봇의 이하이면  => 큰 값을 찾는 것이다.
			i++;
		while (arr[j] >= arr[pivot] && j > left)
			// j의 값이 pivot보다 크고 j가 left보다 큰 경우에 한하여ㅋ
			j--;
	
		if (i > j) // i와 j가 크로스 되었을 경우 -> j와 pivot을 교체
			SWAP(arr[j], arr[pivot], temp);
		else // i가 j보다 작은 경우 -> i와 j를 교체
			SWAP(arr[i], arr[j], temp);
	
	}
	quickSort(arr, left, j - 1); // pivot기준 왼쪽 영역 -> pivot보가 작은 수
	quickSort(arr, j + 1, right); // pivot기분 오른쪽 영역 -> pivot보다 큰수
}

int main() {

	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	// 퀵 정렬 시간 복잡도 O(NlogN)
	// 퀵 정렬 시간 복잡도 O(N^2) 인 경우
	// 1 2 3 4 5

	return 0;
}