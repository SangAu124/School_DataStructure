#include <stdio.h>

//Shell���� -> ���������� ������ �˰���

void shellSort(int arr[], int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) { // gap = gap / 2
		//if(!(gap % 2)) gap++ // ¦���� Ȧ����
		for (int i = gap; i < n; i++) { // �������� ����
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
	//10�� �����͸� �� �����ϴ� ���� ���غ���

	int arr[] = { 1, 9, 15, 12, 3, 7, 5, 8, 11, 2 };
	int n = sizeof(arr) / sizeof(int);
	printf("%d���� ���� ����\n", n);
	shellSort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
} 