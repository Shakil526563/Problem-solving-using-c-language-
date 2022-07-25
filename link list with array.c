
#include<stdio.h>
#include<stdlib.h>

struct Node*createlinklist(int arr[],int size);
void print(struct Node*head);
struct Node{
int data;
struct Node*next;
};
struct Node*createlinklist(int arr[],int size){

int i;
struct Node*head=NULL,*temp=NULL,*current=NULL;
for(i=0;i<size;i++){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=arr[i];
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        current=temp;
    }
    else{
        current->next=temp;
        current =current->next;
    }
}
return head;
}
void print(struct Node*head){
struct Node *temp=head;
while(temp!=NULL){
    printf("%d ->",temp->data);
    temp=temp->next;

}
printf("NULL\n");
}
int main(){
    int ar[6]={5,6,8,6,5,8};
    struct Node*head=NULL;

head=createlinklist(ar,6);
print(head);

}
