#include<stdio.h>
int main(){

int ar[55],i,max,mini;
printf("Enter the array element:");
for(i=0;i<5;i++){
    scanf("%d",&ar[i]);

}
 max=ar[0];
 mini=ar[0];
 for(i=0;i<5;i++){
    if(max<ar[i]){
        max=ar[i];
    }
    if(mini>ar[i]){
        mini=ar[i];
    }
 }

printf("Maximum number %d\n ",max);
 printf("minimum number %d \n",mini);



}


