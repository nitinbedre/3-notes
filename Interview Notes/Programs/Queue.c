#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct queue {
    int front;
    int rear;
    int items[MAX];
};

typedef struct queue que;

void initializeQueue(que *qu) {
    qu->front = -1;
    qu->rear = -1;
}

int isEmpty(que *qu) {
    if(qu->front  > qu->rear) {
        return 1;
    } else {
        return 0;
    }
}


int isFull(que *qu) {
    if(qu->rear == MAX-1) {
        return 1;
    } else {
        return 0;
    }
}

void peek(que *qu) {
    if(!isEmpty(qu)) {
        printf(" \n element: %d",qu->items[qu->front]);
    } else {
        printf("\n Queue is empty");
    }
}

void enQueue(que *qu, int number) {
    if(qu->front == -1) {
        qu->front++;
        qu->rear++;
        qu->items[qu->rear] = number;
        printf("\n first element added %d", number);
    } else if(!isFull(qu)) {
        qu->rear++;
        qu->items[qu->rear] = number;
        printf("\n element added %d", number);
    } else {
        printf("\n Queue is full, cannot add more elements");
    }
}


void deQueue(que *qu) {
    if(!isEmpty(qu)) {
        printf("\n Element removed: %d", qu->items[qu->front]);
        qu->front++;
    } else {
        printf("\n Queue underflow.");
    }
}

void display(que *qu) {
    int front = qu-> front;
    printf("\n");
    while (front <= qu->rear)
    {
       printf("==> %d", qu->items[front]);
       front++;
    }
    
}

int main(char arg[]) {
    que *qu = (que *) malloc(sizeof(que));
    initializeQueue(qu); 
    display(qu);
    enQueue(qu,10);
    display(qu);
    enQueue(qu,20);
    display(qu);
    enQueue(qu,30);
    display(qu);
    enQueue(qu,40);
    display(qu);
    enQueue(qu,50);
    display(qu);
    enQueue(qu,60);
    display(qu);
    enQueue(qu,70);
    display(qu);
    display(qu);
    peek(qu);
    deQueue(qu);
    enQueue(qu,70);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);

    return 0;
}


/*
Simple Queue: 
Queue operations work as follows:

==> two pointers FRONT and REAR
==> FRONT track the first element of the queue
==> REAR track the last element of the queue
==> initially, set value of FRONT and REAR to -1

*/