#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);

    char str[n][200];
    for(i=0; i<n; i++)
    {
        scanf("%s",str[i]);
    }
    char name[50];
    scanf("%s",name);
    for(i=0; i<n; i++)
    {
        int x=strcmp(str[i],name);
        if(x==0)
        {
            printf("Match\n");
            break;
        }

    }
    if (i==n){
        printf("NOt matched");
    }
    getch();
    return 0;
}

