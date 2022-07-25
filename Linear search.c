#include<stdio.h>
int main()
{
    int num[5],i,chose;
     int pos=-1;

    for(i=0;i<5;i++){

        scanf("%d",&num[i]);

    }
    printf("Enter chose the number\n");
     scanf("%d",&chose);
     for(i=0;i<5;i++){
        if(num[i]==chose){

            pos=i+1;
            break;
        }

     }
    if(pos==-1){
            printf("invalid number\n");
        }
        else{
        printf(" number is found%d\n  %d\n",chose,pos);
     }

    return 0;
}
