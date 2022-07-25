#include<stdio.h>
int find_num(int ar[]){
int i;
int pos=0;
int neg=0;
int even=0;
int odd=0;
if(ar[1]>0){
    pos++;
}
else if (ar[i]<0){
    neg++;
}
else if(ar[i]%2==0){
    even++;
}
else {
    odd++;
}

}
printf("postive =%d\n negative=%d\n even=%d\n odd=%d\n",pos,neg,even,odd);

int main(){
int ar[20],i,num;
int pos=0,
int neg=0,
int even=0;
int odd=0;
for(i=0;i<20;i++){
    scanf("%d",&ar[i]);
}
find_num(ar);
}
