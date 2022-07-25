#include<stdio.h>
int main(){
    int N,i,X,Y;
    scanf("%d",&N);
    scanf("%d %d",&X,&Y);
    int ar[N];
    for(i=0;i<N;i++){
        scanf("%d",&ar[i]);

    }
    for(i=X;i<=Y;i++){
        if(ar[i]%4==0){
              printf("%d ",ar[i]);
        }

    }

    return 0;
}
