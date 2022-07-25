#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;

};struct node *head;
void insert(int value,int n){
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=value;
temp->next =NULL;
if(n==1){
    temp->next =head;
    head=temp;
    return;
}
struct node *temp1=head;
for(int i=0;i<n-2;i++){
    temp1=temp1->next;
}
temp->next=temp1->next;
temp1->next=temp;
}
void print(){
struct node *temp2=head;
while(temp2!=NULL){
    printf("%d ->",temp2->data);
    printf("%d ->",temp2->next);
    temp2=temp2->next;
}

}
int main(){
insert(5,1);
insert(6,2);
insert(8,3);
insert(9,3);
insert(7,5);
print(head);
}
