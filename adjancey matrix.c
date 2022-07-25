#include <stdio.h>

int main()
{
    int i,j,k,arr[10][10],s[10],num;

    printf("Please Input Matrix size : ");
    scanf("%d", &num);
    printf("Now Input Matrix Element\n");
    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is \n");
    for(i=0; i<num; i++)
    {
        for(j=0; j<num ; j++)
            printf("% 4d",arr[i][j]);
        printf("\n");
    }

    for(i=0; i<num; i++)
    {
        s[i]=0;
        for(j=0; j<num; j++)
            s[i]=s[i]+arr[i][j];
    }



    printf("Sum of row is\n");
    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
            printf("\t%d",arr[i][j]);
        printf("\t%d",s[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
