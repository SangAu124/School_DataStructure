#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int queue[5];

void menuf() { // 메뉴 함수
	printf("\n1. 큐에 삽입 2. 큐에서 삭제\n");
	printf("3. 내용 보기 2. 종료\n");
}

void Enqueue(int* back, int item) { // 큐에 데이터 삽입
	if (*back == 4) {
		printf("큐가 가득참\n");
		return;
	}
	queue[++ * back] = item;
}

int Dequeue(int* front, int back) { // 큐에 데이터 삭제
	if (*front == back) { // 큐가 비었음
		return -1;
	}
	return queue[++ * front];
}