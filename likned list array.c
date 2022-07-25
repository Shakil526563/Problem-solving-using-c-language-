#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};

struct node *array_linked(int ar[],int size){
int i;
struct node *temp=NULL,*current=NULL;
struct node *head=NULL;
for(i=0;i<size;i++){
temp=(struct node*)malloc(sizeof(struct node));
temp->data=ar[i];
temp->next =NULL;
if (head==NULL){
    head=temp;
   current=temp;
}
else
{
    current->next=temp;
    current=current->next;
//temp->next=head;
//temp=temp->next;
}

}
return head;

};
int main(){
int arr[5]={2,3,4,8};
struct node *result=NULL;
result=array_linked(arr,4);
while(result!=NULL){
    printf("%d ->",result->data);
    result=result->next;
}
printf("NULL");
}
