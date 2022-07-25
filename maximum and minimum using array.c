#include<stdio.h>
int main()
{
    int i,max,mini;
    int ar[5]={5,8,5,6,1};
    max=mini=ar[0];
    for(i=0;i<5;i++){
        if(ar[i]>max){
            max=ar[i];
        }
   else if(ar[i]<mini)
         {
    mini=ar[i];
 }
}
    printf("max=%d\n mini=%d\n",max,mini);

}
