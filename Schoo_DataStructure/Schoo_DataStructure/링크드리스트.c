#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		// malloc free �Լ��� ����� �������
// ���Ḯ��Ʈ, ��ũ�帮��Ʈ, inked list
typedef struct NODE ND;
struct NODE {		// ���Ḯ��Ʈ�� ��� ����ü
	ND* next;		// ���� ����� �ּҸ� ������ ������
	int data;		// �����͸� ������ ���
};
// Linked List

int main() {

	ND* head = (ND*)malloc(sizeof(ND));			//�̸� ��� ����
	ND* node1 = (ND*)malloc(sizeof(ND));		//ù ��° ���
	head->next = node1;							
	node1->data = 10;							

	ND* node2 = (ND*)malloc(sizeof(ND));        // �� ��° ���
	node1->next = node2;
	node2->data = 20;

	ND* node3 = (ND*)malloc(sizeof(ND));		//4�� ��° ���
	node2->next = node3;
	node3->data = 30;

	node3->next = NULL;
	
	//node2->next = NULL; // ���̻� ��尡 ����.

	ND* here = head->next;
	while (here != NULL) {
		printf("%d ", here->data);
		here = here->next;
	}
	free(node3);
	free(node2);
	free(node1);
	free(head);

	return 0;
}
