
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};struct node *head;
    void insert(int n){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=n;

    temp->next=head;
    head=temp;

    }
void print(){

struct node *temp1=head;
while(temp1!=NULL){
    printf("%d ->",temp1->data);
    temp1=temp1->next;
}

}
int main(){

insert(5);
insert(8);
insert(9);
insert(3);
print(head);
printf("NUL\n");
}
