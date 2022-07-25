#include<stdio.h>
int maxelment(int N,int C,int S[],int V[]){
int ar[N+1][C+1];
int i,j;
for(i=0;i<=N;i++){
    for(j=0;j<=C;j++){
        if(i==0||j==0){
            ar[i][j]=0;
        }
        else if(S[i-1]<=j){
            ar[i][j]=maxitem(V[i - 1] + ar[i - 1][j - S[i - 1]], ar[i - 1][j]);
        }
        else {
            ar[i][j]=ar[i-1][j];
        }
    }
}
return ar[N][C];

}
int maxitem(int n,int m){

if(n>m){
    return n;
}
else{
    return m;
}

}
int main(){

int N,C;
scanf("%d %d",&N,&C);
int S[N];
int V[N];
int i;
for(i=0;i<N;i++){
    scanf("%d",&S[i]);
}
for(i=0;i<N;i++){
    scanf("%d",&V[i]);
}
int result=maxelment(N,C,S,V);
printf("%d\n",result);
}
