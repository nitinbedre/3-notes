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
    if(qu->rear == -1) {
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
    if(isEmpty(qu)) {
        qu->front++;
        qu->rear++;
        qu->items[qu->rear] = number;
        printf("\n element added %d", number);
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
        printf("\n Queue is Empty, cannot peek more elements");
    }
}


int main(char arg[]) {
    que *qu = (que *) malloc(sizeof(que));
    initializeQueue(qu); 
    enQueue(qu,10);
    enQueue(qu,20);
    enQueue(qu,30);
    enQueue(qu,40);
    enQueue(qu,50);
    enQueue(qu,60);
    enQueue(qu,70);
    peek(qu);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);
    deQueue(qu);

    return 0;
}


/*
Circular Queue: 
Queue operations work as follows:

==> two pointers FRONT and REAR
==> FRONT track the first element of the queue
==> REAR track the last element of the queue
==> initially, set value of FRONT and REAR to -1

*/