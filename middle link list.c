#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};
struct Node *head;

void insert(int data,int n)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;

    if(n==1)
    {
        temp->next=head;
        head=temp;
        return;

    }
    struct Node*temp1=head;

    for(int i=0; i<n-2; i++)
    {
        temp1=temp1->next;
    }

    temp->next=temp1->next;
    temp1->next=temp;

}
void print()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }

}

int main()
{
    head=NULL;
    insert(5,1);
    insert(9,2);
    insert(8,3);
    insert(6,1);
    insert(10,4);


    print();

}




