//����
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

int stack[SIZE]; // ���� �ڷᱸ��
void push(int); // ���ÿ� ������ �� �� ����
void pop(); // ���ÿ��� ������ �� �� ����, ����
void display(); // ������ ���� �����ֱ�
void menu() {
	printf("----------------------------------------------\n");
	printf("1�� ���ÿ� ����(push) 2�� ���ÿ��� ����(pop)\n");
	printf("3�� ���� ����(display) 4�� ���α׷� ����(exit)\n");
	printf("----------------------------------------------\n");
}
int top = -1;

int main() {

	int val, n;
	printf("*************** ���� ���� �޴� ***************\n");
	while (1) {
		menu();

		printf("�޴��� �����ϼ��� : "); scanf("%d", &n);

		switch (n) {
		case 1: //push
			printf("���ÿ� ������ ���� : "); scanf("%d", &n);
			push(n);
			break;
		case 2: // pop
			pop();
			break;
		case 3: // display
			display();
			break;
		case 4: // exit
			return 0;
			break;
		default:
			printf("�ٽ� �Է��ϼ���. \n");
		}
	}
	return 0;
}


void push(int n) {
	if (top == SIZE - 1) // top == 4
		printf("***** ������ ������ *****\n");
	else
		stack[++top] = n;
}
void pop() { // ������ ������� ���� ������ ������̶�� ǥ��
	if (top < 0) 
		printf("***** ������ ������ϴ� *****\n");
	else
		printf("%d�� ������\n", stack[top--]);
}
void display() {
	printf("���� ������ �������\n");
	for (int i = 0; i < top; i++) {
		printf("%4d", stack[i]);
	}
	printf("\n");
}