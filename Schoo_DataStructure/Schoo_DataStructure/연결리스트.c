#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		// malloc free �Լ��� ����� �������
//���Ḯ��Ʈ, ��ũ�帮��Ʈ, inked list
typedef struct NODE ND;
struct NODE {		//���Ḯ��Ʈ�� ��� ����ü
	ND* next;		//���� ����� �ּҸ� ������ ������
	int data		// �����͸� ������ ���
};

int main() {

	ND* head = (ND*)malloc(sizeof(ND));			//�̸� ��� ����
	ND* node1 = (ND*)malloc(sizeof(ND));		//ù ��° ���
	head->next = node1;							//
	node1->data = 10;							//

	return 0;
}
