#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX], item, front = -1, rear = -1;

int main() {
	
	int option;
	
	options :
		printf("\nEnter your choice : \n\n");
		printf("%d - Insert\n", 1);
		printf("%d - Delete\n", 2);
		printf("%d - Display\n", 3);
		printf("%d - Exit\n", 4);
	
	scanf("%d", &option);
	
	switch(option) {
		case 1:
			insert();
			goto options;
			break;
		case 2:
			del();
			goto options;
			break;
		case 3:
			display();
			goto options;
			break;
		case 4:
			printf("Successfully Exited");
			break;
	}
	
	return 0;
}

int insert() {
	if (rear == (MAX-1)) {
		printf("Queue Overflow\n");
		return 0;
	}	else {
		rear += 1;
	}
	scanf("%d", &item);
	queue[rear] = item;
	if (front == -1) {
		front = 0;
	}
	return 0;
}

int del() {
	if (front == -1) {
		printf("Queue Underflow\n");
		return 0;
	}	else {
		item = queue[front];
	}
	if (front == rear) {
		front = -1;
		rear = front;
	}	else {
		front += 1;
	}
	printf("Successfully deleted an element\n");
	return 0;
}
int display() {
	int i;
	if (front == -1) {
		printf("Queue Empty\n");
		return 0;
	}	else {
		printf("Elements of the queue: \n");
		for (i=0; i <front; i++) {
			printf("# ");
		}
		for (i=front; i <= rear; i++) {
			printf("%d ", queue[i]);
		}
		for (i=rear+1; i< MAX; i++) {
			printf("# ");
		}
	}
	printf("\n");
	return 0;
}




