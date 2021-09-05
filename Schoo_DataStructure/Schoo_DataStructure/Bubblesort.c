#include <stdio.h>

void bubble1(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (a[j - 1] > a[j]) {
				int t = a[j - 1];
				a[j - 1] = a[j];
				a[j] = t;
			}
		}
	}
}

void bubble2(int arr[], int n) {
	int i, j;
	for (i - 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
	// #define swap(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
	// #define swap1(t, x, y) {t = x; x = y; y = t;}
}

int main() {

	int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

	bubble1(a, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}