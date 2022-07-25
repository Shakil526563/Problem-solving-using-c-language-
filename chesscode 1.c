#include<stdio.h>
int main(){
int T,i;
scanf("%d",&T);
int A[10],B[10],X[10],Y[10];
for(i=0;i<T;i++){
    scanf("%d",&A[i]);
}
for(i=0;i<T;i++){
    scanf("%d",&B[i]);
}
for(i=0;i<T;i++){
    scanf("%d",&X[i]);
}
for(i=0;i<T;i++){
    scanf("%d",&Y[i]);
}

if (A[0]*A[1]<=A[2]*A[3]){
    printf("Yes\n");}
else{
    printf("No\n");}


if (B[0]*B[1]<=B[2]*B[3]){
    printf("Yes\n");}
else{
    printf("No\n");}


if (X[0]*X[1]<=X[2]*X[3]){
    printf("Yes\n");}
else{
    printf("No\n");}

if (Y[0]*Y[1]<=Y[2]*Y[3]){
    printf("Yes\n");}
else{
    printf("No\n");}


}




