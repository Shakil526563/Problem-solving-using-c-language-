#include<stdio.h>
void max_mini(int ar[],int n){
int max,mini;
max=mini=ar[0];
}
int main()
{
int max,mini;
    int ar[5]={5,6,3,54,8},i;
    for(i=0;i<5;i++){
        if(ar[i]>max){
            max=ar[i];
        }
        else if(ar[i<mini]){
            mini=ar[i];
        }
    }

    printf("max=%d\n mini=%d\n",max, mini);
    max_mini(ar,5);
}
