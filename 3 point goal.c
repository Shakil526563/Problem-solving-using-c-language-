#include<stdio.h>
int main(){
int X,Y;
scanf("%d %d",&X,&Y);

if(X>Y){
    int result=Y+3;
    if(result>X){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
else{
    int result=X+3;
    if(result>Y){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

}
