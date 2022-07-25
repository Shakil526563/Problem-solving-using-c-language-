#include<stdio.h>
int find_num(int ar[]){
int i;
int pos=0;
int neg=0;
int even=0;
int odd=0;
for(i=0;i<5;i++){

if(ar[i]>0){
    pos++;
}
}
for(i=0;i<5;i++){
 if (ar[i]<0){
    neg++;
}
}
for(i=0;i<5;i++){

 if(ar[i]%2==0){
    even++;
}}
for(i=0;i<5;i++){

if(ar[i]%2!=0) {
    odd++;
}
}
printf("postive =%d\n negative=%d\n even=%d\n odd=%d\n",pos,neg,even,odd);


}

int main(){
int ar[5],i,num;

for(i=0;i<5;i++){
    scanf("%d",&ar[i]);
}
find_num(ar);
}
