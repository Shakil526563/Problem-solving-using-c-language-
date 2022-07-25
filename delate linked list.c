#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *creat_list(int a[],int size)
{
    struct node *head=NULL,*temp=NULL,*current=NULL;
    for(int i=0; i<size; i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next =NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next =temp;
            current=current->next;
        }
    }
    return head;
}

int main()
{
    int ar[]= {2,3,45,7};
    struct node *head=NULL;
    head=creat_list(ar,4);
    print(head);
    struct node*newnode=delete(head,3);
print(newnode);
}

struct node *delete (struct node *head ,int data)
{
    struct node *dummy_head=(struct node*)malloc(sizeof(struct node));
    dummy_head->next=head;
    struct node *temp3=dummy_head;
    while(temp3->next!=NULL)
    {
        if(temp3->next->data==data)
        {
            temp3->next=temp3->next->next;
        }
        else
        {
            temp3=temp3->next;
        }
    }
    return dummy_head->next;
}
void print(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf(" NULL");

}

