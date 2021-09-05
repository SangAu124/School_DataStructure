#include <stdio.h>
#include <stdlib.h>

typedef struct NODE ND;
struct NODE {
	ND* next;
	int data;
};

int main() {

	ND* head = (ND*)malloc(sizeof(ND));

	ND* node1 = (ND*)malloc(sizeof(ND));
	head->next = node1;
	node1->data = 1;

	ND* node2 = (ND*)malloc(sizeof(ND));
	node1->next = node2;
	node2->data = 2;

	ND* node3 = (ND*)malloc(sizeof(ND));
	node2->next = node3;
	node3->data = 3;

	node3->next = NULL;

	ND* here = head->next;
	while (here != NULL) {
		printf("%d ", here->data);
		here = here->next;
	}
	free(head);
	free(node1);
	free(node2);
	free(node3);

	return 0;
}
