#include<stdio.h>
void reverse(int ar[],int n){
int i;
for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
}
for(i=n-1;i>=0;i--){
    printf("reverse number %d\n",ar[i]);
}
}
int main()
{
int ar[5],n,i;
printf("Enter how many number you want");
scanf("%d",&n);
    reverse(ar,n);
    return 0;
}
