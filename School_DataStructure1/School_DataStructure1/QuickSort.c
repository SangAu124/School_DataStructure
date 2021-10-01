#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
//int n = sizeof(arr) / sizeof(int);
int n = 10;
	
void quickSort(int arr[], int left ,int right) { 
	if (left >= right) { // ������ ������ �� 1�� ���
		return;
	}
	int pivot = left; // �Ǻ��� �� �������� ������ ���
	int i = left + 1; // i�� �Ǻ� �ٷ� ������
	int j = right;	  // j�� �� ������
	int temp;

	while (i <= j) { // i�� j���� �� ������
		while (arr[i] <= arr[pivot]) // i�� ���� �Ǻ��� �����̸�  => ū ���� ã�� ���̴�.
			i++;
		while (arr[j] >= arr[pivot] && j > left)
			// j�� ���� pivot���� ũ�� j�� left���� ū ��쿡 ���Ͽ���
			j--;
	
		if (i > j) // i�� j�� ũ�ν� �Ǿ��� ��� -> j�� pivot�� ��ü
			SWAP(arr[j], arr[pivot], temp);
		else // i�� j���� ���� ��� -> i�� j�� ��ü
			SWAP(arr[i], arr[j], temp);
	
	}
	quickSort(arr, left, j - 1); // pivot���� ���� ���� -> pivot���� ���� ��
	quickSort(arr, j + 1, right); // pivot��� ������ ���� -> pivot���� ū��
}

int main() {

	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	// �� ���� �ð� ���⵵ O(NlogN)
	// �� ���� �ð� ���⵵ O(N^2) �� ���
	// 1 2 3 4 5

	return 0;
}