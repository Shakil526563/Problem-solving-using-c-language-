#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
int ar[n][2];
for(i=0;i<n;i++){
    for(j=0;j<2;j++){
        scanf("%d",&ar[i][j]);
    }
}
for(i=1;i<=n-2;i++){
    for(j=1;j<=2;j++){
        if(ar[i][j]==ar[i][j]&&ar[i+1][j]==ar[i+1][j]&&ar[i+2][j]==ar[i+2][j]){
            printf("Yes");
            exit(1);
        }
        else{
            printf("No");
          exit(1);
        }
    }
}

}
