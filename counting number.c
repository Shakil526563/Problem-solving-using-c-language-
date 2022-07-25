#include<stdio.h>
int main()
{
    char ar[10]="shaki";
    int i=0;
    int len=0;
    while(ar[i]!='\0'){
        len++;
        i++;
    }
    printf("%d",len);
}
