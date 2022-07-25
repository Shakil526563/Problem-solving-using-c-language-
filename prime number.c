#include<stdio.h>
int main(){
int ar[55],i,count=0,m;
printf("Enter the number :");
scanf("%d",&m);
for(i=2;i<m;i++){
    if(m%i==0){
        count++;

    }
}
if(count==0){
    printf("%d is prime number",m);
}
else{
    printf("%d is not prime number ",m);
}
}
