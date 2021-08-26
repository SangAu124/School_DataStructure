#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		// malloc free 함수가 선언된 헤더파일
//연결리스트, 링크드리스트, inked list
typedef struct NODE ND;
struct NODE {		//연결리스트의 노드 구조체
	ND* next;		//다음 노드의 주소를 저장할 포인터
	int data		// 데이터를 저장할 멤버
};

int main() {

	ND* head = (ND*)malloc(sizeof(ND));			//미리 노드 생성
	ND* node1 = (ND*)malloc(sizeof(ND));		//첫 번째 노드
	head->next = node1;							//
	node1->data = 10;							//

	return 0;
}
