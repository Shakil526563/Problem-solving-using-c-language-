#include<stdio.h>
#include<stdlib.h>
struct node{
int data ;
struct node*next;

};
struct node *head;
void insert (int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next =head;
    head = temp;
}
void insert_position(int value,int posi){

struct node *current,*temp;
int count=0;
current=head;
while(current!=NULL){
    count++;

if(count==posi-1)
{
    temp=(struct node * )malloc(sizeof(struct node));
    temp->data= value;
    temp->next = current->next;
    current ->next = temp;
}
current = current->next;
}

}
void print ()
{
    struct node*temp2=head;
    while (temp2!=NULL){
        printf("%d ->",temp2->data);
        temp2=temp2->next;
    }
    printf("NULL\n");
}
int main(){

printf("print your progrme\n");
insert (22);
insert (25);
insert (2255);
insert (2285);
print(head);
insert_position(2,1);
insert_position(5,3);

print(head);

}
