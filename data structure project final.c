#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct node
{
    char  Employe_Name[40];
    char Employe_Age[50];
    char Employe_Id[30];
    char Employe_Salary[50];
    char Employe_contract_number[50];

    struct node *next;
};
struct node *head;
void Add_Record()
{
    getchar();
    printf("######## Add Record########\n");
    struct node *temp=(struct node*) malloc (sizeof(struct node));
    printf("Employe_Name :");
    gets(temp->Employe_Name);
    printf("Employe_Age :");
    gets(temp->Employe_Age);
    printf("Employe_Id :");
    gets(temp->Employe_Id);
    printf("Employe_Salary :");
    gets(temp->Employe_Salary);
    printf("Employe_contract_number :");
    gets(temp->Employe_contract_number);


    temp->next=head;
    head=temp;

    return 0;



}
void List_Records()
{
    struct node *temp=head;
    printf("\n######## List Records ############\n");

    while(temp!=NULL)
    {
        printf("Employe_Name: %s\n",temp->Employe_Name);
        printf("Employe_Age:%s\n",temp->Employe_Age);
        printf("Employe_Id %s\n",temp->Employe_Id);
        printf("Employe_Salary :%s\n",temp->Employe_Salary);
        printf("Employe_contract_number %s\n",temp->Employe_contract_number);

        temp = temp->next;


    }
    return;
}
void Employe_search()
{
    char Search_Id[77];
    int found=0;
    struct node *temp=head;
    getchar();
    printf("\n######## Modify_Records ############\n");

    printf("Search_Id ");
    gets(Search_Id);
    while(temp!=NULL)
    {
        if(strcmp(temp->Employe_Id,Search_Id)==0)
        {
            found=1;
            break;
        }
        temp=temp->next;
    }
    if(found==1)
    {
        printf("Old Information \n");
        printf("Employe_Name: %s\n",temp->Employe_Name);
        printf("Employe_Age:%s\n",temp->Employe_Age);
        printf("Employe_Id :%s\n",temp->Employe_Id);

        printf("Employe_Salary :%s\n",temp->Employe_Salary);
        printf("Employe_contract_number %s\n",temp->Employe_contract_number);

    }
    else
        printf("No data  with id %s! \n",Search_Id);
    return ;
}
void Modify_Records()
{
    char Search_Id[77];
    int found=0;
    struct node *temp=head;
    getchar();
    printf("\n######## Modify_Records ############\n");

    printf("Search_Id ");
    gets(Search_Id);
    while(temp!=NULL)
    {
        if(strcmp(temp->Employe_Id,Search_Id)==0)
        {
            found=1;
            break;
        }
        temp=temp->next;
    }
    if(found==1)
    {
        printf("Old Information \n");
        printf("Employe_Name: %s\n",temp->Employe_Name);
        printf("Employe_Age:%s\n",temp->Employe_Age);
        printf("Employe_Salary :%s\n",temp->Employe_Salary);
        printf("Employe_contract_number %s\n",temp->Employe_contract_number);

        printf("_________________\n");
        printf("New Information\n");

        printf("Employe_Name");
        gets(temp->Employe_Name);
        printf("Employe_Age");
        gets(temp->Employe_Age);
        printf("Employe_Salary");
        gets(temp->Employe_Salary);
        printf(" Employe_contract_number");
        gets(temp->Employe_contract_number);

        printf("Data Update \n");
    }
    else
        printf("No data found with id %s! \n",Search_Id);
    return ;
}

void Delate_Records()
{

    char Search_Id [77];
    int found=0;
    struct node *temp=head,*pretemp;
    getchar();
    printf("\n######## Delete_Records  ############\n");


    printf("Search_Id ");
    gets(Search_Id);
    if(strcmp(temp->Employe_Id,Search_Id)==0)
    {

        head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL)
    {
        if(strcmp(temp->Employe_Id,Search_Id)==0)
        {
            found=1;
            break;
        }
        pretemp=temp;
        temp=temp->next;
    }
    if(found==1)
    {
        pretemp->next = temp->next;
        free(temp);

        printf("Information Update \n");
    }


}
int main()
{
    int n;
    head=NULL;
    while(1)
    {

        printf("\n######## Main Menu #############\n");
        printf("\n################################\n");
        printf("\n######## 1. Add Record     ######\n");
        printf("\n######## 2. List Records   ######\n");
        printf("\n######## 3. Modify Records ######\n");
        printf("\n######## 4. Delate Records ######\n");
        printf("\n######## 5. Employe_search ######\n");
        printf("\n######## 6. Exit           ######\n");
        printf("\n#################################\n");


        printf("Reply: ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            Add_Record();
            break;
        case 2:
            List_Records();
            break;

        case 3:
            Modify_Records();

            break;

        case 4:
            Delate_Records();


            break ;

        case 5:
            Employe_search();

            break ;

        case 6:

            return 0;
            break ;

        default:
            printf("Invalid input");
            break;
        }
    }

    return 0;
}

