#include<stdio.h>
int main()
{
    int ar[100],i,n;
    printf("how many number you want to reverse\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
for(i=n-1;i>=0;i--){
    printf("reverse the number %d\n",ar[i]);
}
return 0;
}
