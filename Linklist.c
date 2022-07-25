#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;

};
struct node *head;
void insert(int data){
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=head;
head =  temp;

}

void print(){
struct node*temp=head;
while(temp!=NULL){
    printf("%d -> ",temp->data);
    temp=temp->next;

}
}
int main(){
    head=NULL;
insert(5);
insert(54);
print();

}


