#include<stdio.h>
int binary_search(int ar[],int n,int search){
    int left=0,right=n-1,middle,k=0;
    while(left<=right){
        middle=(left+right)/2;
         k++;
        if(ar[middle]<search){
            left=middle+1;
        }
        else if(ar[middle]>search){
            right=middle-1;
        }
       else if(ar[middle]==search){
           return k;
       }
    }

    printf("%d",k);
}

int main(){
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int search;
    scanf("%d",&search);
    int k,j;
    for(i=1;i<n;i++){
       j=i-1;
       k=ar[i];
       while(i>=0&&ar[j]>k)
       {
           ar[j+1]=ar[j];
           j--;
       }
       ar[j+1]=k;
    }
    int round=binary_search(ar,n,search);
    printf("%d",round);
}
