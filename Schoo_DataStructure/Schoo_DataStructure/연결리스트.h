#ifndef _D_LINKED_LIST_H
#define _D_LINKED_LIST_H
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int LData; // 리스트 데이터
typedef struct _n {
	LData data; // int data;
	struct _n* next;
}Node;
typedef struct _linked {
	Node* head; // head node
	Node* cur; // current node
	Node* before; // 이전 노드 가리킴
	int numOfData;
	int (*comp)(LData d1, LData d2); // 함수포인터 -> 
}LinkedList;

//선언
typedef LinkedList List; // 리스트
void ListInit(List* plist); // init = 초기화, p = 포인터
void LInsert(List* plist, LData data);
int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

// 리스트의 특정 데이터 삭제
LData LRemove(List* plist);
int LCount(List* plist);
void SetSortRule(List* plist, \
	int (*comp)(LData d1, LData d2));

#endif