#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int queue[5];

void menuf() { // �޴� �Լ�
	printf("\n1. ť�� ���� 2. ť���� ����\n");
	printf("3. ���� ���� 2. ����\n");
}

void Enqueue(int* back, int item) { // ť�� ������ ����
	if (*back == 4) {
		printf("ť�� ������\n");
		return;
	}
	queue[++ * back] = item;
}

int Dequeue(int* front, int back) { // ť�� ������ ����
	if (*front == back) { // ť�� �����
		return -1;
	}
	return queue[++ * front];
}