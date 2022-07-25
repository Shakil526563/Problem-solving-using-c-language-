#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head;
void insert(int value){
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=value;
temp->next =NULL;
if(head==NULL){
    head=temp;
}else{
struct node *temp1=head;
while(temp1->next=NULL){

    temp1=temp1->next;
}
temp->next=temp1->next;
temp1->next=temp;
}}
void print(){
struct node *temp2=head;
while(temp2!=NULL){
    printf("%d ",temp2->data);
    temp2=temp2->next;

}

}
int main(){
insert(5);
insert(9);
insert(8);

print(head);

}
