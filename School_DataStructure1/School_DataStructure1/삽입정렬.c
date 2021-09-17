#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insertionSort(int arr[], int n) {
	//��������, arr�� �迭�� �̸�
	int i, j, tmp;
	for (i = 1; i < n; i++) {
		tmp = arr[i]; // tmp�� ���� �迭�� ��Ȯ�� ��ġ�� ����
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
			arr[j + 1] = arr[j]; // �迭 ���� ���� �ڷ� �̵�
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