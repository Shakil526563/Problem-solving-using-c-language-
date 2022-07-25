#include<stdio.h>
int main(){
int n,a,v;
scanf("%d %d %d",&n,&a,&v);
int res=n*a;

if(res<v){
    printf("%d",res);
}
else{
    printf("%d",v);
}

}

