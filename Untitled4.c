
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;


void insert( int N) {

    struct Node* temp =(struct node*) malloc(sizeof(struct Node));
    temp->data = N;
    temp->next = NULL;

    if(head==NULL) {
        head = temp;
    } else {

        struct Node* temp1;
        temp1 = head;

        while(temp1->next!=NULL) {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}
void print(struct Node* temp) {
   struct Node* temp1;
    while(temp!=NULL) {

        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main() {
    head = NULL;
    insert(1);
    insert(6);
    insert(99);
    insert(55);
    print(head);
    return 0;
}

