#include<stdio.h>
#include<stdlib.h>

struct List {
    int element;
    struct List *next;
};

typedef struct List list;
list *head = NULL;

void printLinkList() {
    list *temp;
    if(head == NULL) {
        printf("Link List is Empty.");
    } else {
        temp = head;
        while(temp->next != NULL) {
            printf("--> %d", temp->element);
            temp = temp->next;
        }
    }
}

void insertAtFirst(int number) {
    list *temp;
    list *node = (list *) malloc(sizeof(list));
    node->element = number;
    node->next = NULL;
    if(head == NULL) {
        head = node;
    } else {
        temp = head;
        head = node;
        head->next = temp;
    }
    printf("\nnode inserted at first:\n");
    printLinkList();
}

void insertAtLast(int number) {
    list *node, *temp;
    node = (list *) malloc(sizeof(list));
    node->element = number;
    node->next = NULL;
    if(head == NULL) {
        head = node;
        printf("node inserted at first\n");
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = node;
        printf("\n node inserted at last\n");
    }
    printLinkList();
}

int main(char args[]) {
    printf("here it is in the main function:");
    insertAtLast(10);
    insertAtLast(20);
    insertAtLast(30);
    insertAtLast(40);
    insertAtLast(50);
    insertAtLast(60);
    insertAtLast(70);
    insertAtFirst(5);
    insertAtFirst(1);
    insertAtFirst(0);  
} 