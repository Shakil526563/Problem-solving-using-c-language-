
#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;

};struct node *head;
void insert (int N,int n){
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=N;
temp->next=NULL;
if(n==1){
    temp->next=head;
    head=temp;
    return;
}
struct node*temp1=head;
int i;
for(i=0;i<n-2;i++){

    temp1=temp1->next;
}
temp->next=temp1->next;
temp1->next=temp;
}
void print(){
struct node *temp3=head;
while(temp3!=NULL){
    printf("%d  ",temp3->data);
    temp3=temp3->next;
}

}
int main(){
head=NULL;
insert (5,1);
insert (6,2);
insert (5,3);
insert (8,4);
print();
}
