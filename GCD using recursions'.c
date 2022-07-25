#include<stdio.h>
int gcm(int n, int m){
if(m!=0){
    return gcm(m,n%m);

}
else{
    return n;
}


}

int main(){

int n1,n2;
printf("Input two integer number");
scanf("%d %d",&n1,&n2);
printf("GCM %d and %d is %d",n1,n2,gcm(n1,n2));

}
