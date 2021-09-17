// Queue 구현
//FIFO, front, back, Enqueue, Dequeue
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int queue[5];


void menuf() { //메뉴 함수 function
	printf("\n1.큐에 삽입 2.큐에서 삭제\n");
	printf("3.내용 보기 4.종료\n");
}


//넣는 값이 item
void Enqueue(int* back, int item) {//큐에 삽입
	if (*back == 4) {//현재 큐의 사이즈는 5
		printf("큐가 가득참\n");
		return;
	}
	queue[++ * back] = item;
}
int Dequeue(int* front, int back) {
	if (*front == back) {
		return -1; //-1이면 큐가 비었다고 생각
		//보통 0이 리턴되면 정상적인 종료
	}
	return queue[++ * front];
}
void Display(int front, int back) {
	if (front == back)
		printf("큐가 비었음\n");
	for (int i = front; i < back + 1; i++)
		printf("%4d", queue[i]);
}


int main() {
	//큐, 스택 모두 1차원 배열로 구현
	int front = -1, back = -1;
	//queue : front, back // stack : top
	int menu, item;
	while (1) {
		menuf();
		scanf("%d", &menu);
		switch (menu) {
		case 1://큐에 데이터 또는 job 삽입
			scanf("%d", &item);
			Enqueue(&back, item);
			break;
		case 2://큐에서 삭제
			item = Dequeue(&front, back);
			if (item == -1)
				printf("큐가 비었음");
			else
				printf("%d가 삭제됨\n", item);
			break;
		case 3://큐의 내용 보여주기
			Display(front, back); //과제
			//큐의 내용을 출력해 보시오
			break;
		case 4://프로그램 종료
			return 0;
		default:
			printf("다시 입력하세요.");
		}
	}


}