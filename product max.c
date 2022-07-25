#include<stdio.h>
long long int max1(long long int x,long long int y){
if(x>y){
    return x;
}
else{
    return y;
}

}
long long int max2(long long int a,long long int b){
if(a>b){
    return a;
}
else{
    return b;
}

}
int main(){
long long int a,b,c,d;
scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
long long int result1=max1(a*c,a*d);
long long int result2=max2(b*c,b*d);
if(result1>result2){
    printf("%lld",result1);
}
else{
printf("%lld",result2);
}
}
