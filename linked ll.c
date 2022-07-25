#include<stdio.h>
#include<stdlib.h>
struct node{
int data ;
struct node *next;

};
struct node *head;
void insert(int n){
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=n;
temp->next=NULL;
if(head==NULL){
    head=temp;
}
else {

    struct node *temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
}
}
void print(){
struct node *temp3=head;
while(temp3!=NULL){
    printf("%d  ",temp3->data);
    temp3=temp3->next;
}


}
int main(){
insert(5);
insert(9);
insert(7);
insert(6);
print();
}

