#include<stdio.h>
#include<stdlib.h>

#define MAX 5

struct  stack
{
   int items[MAX];
   int top;
};

typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}

int isEmpty(st *s) {
    if(s->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isFull(st *s) {
    if(s->top == MAX-1) {
        return 1;
    } else {
        return 0;
    }
}

void push(st *s, int number) {
    if(isFull(s) == 0) {
        s->top++;
        s->items[s->top] = number;
        printf("\n Item Pushed: %d", s->items[s->top]);
    } else {
        printf("\n stack is full. cannot add Elements");
    }
}

void printStack(st *s) {
    for( int i = MAX - 1 ; i >= 0 ; i--) {
        printf("\n %d", s->items[i]);
    }
}

void pop(st *s) {
    if(isEmpty(s) == 0) {
        printf("\n Item popped: %d", s->items[s->top]);
        s->top--;
    } else {
        printf("\n stack is Empty.");
    }
}


int main(char arg[]) {
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);
    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    push(s,50);
    push(s,60);
    push(s,70);
    push(s,10);
    push(s,10);
    push(s,10);
    push(s,10);
    push(s,10);
    printStack(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    

    return 0;
}

/*

Working of Stack Data Structure

The operations work as follows:

    ==> A pointer called TOP is used to keep track of the top element in the stack.
    ==> When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1.
    ==> On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP.
    ==> On popping an element, we return the element pointed to by TOP and reduce its value.
    ==> Before pushing, we check if the stack is already full
    ==> Before popping, we check if the stack is already empty
    
*/