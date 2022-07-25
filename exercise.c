#include<stdio.h>
void reverse(int *ar[],int *n){

    for(int i=n-1;i>=0;i--){
        printf("%d",ar[i]);
    }

}
int main(){
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    reverse(&ar,&n);
}
