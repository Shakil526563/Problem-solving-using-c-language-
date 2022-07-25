#include<stdio.h>
#define CAPACITY 100
char stack[CAPACITY];
int top=-1;

void push(char ar[]){
    for(int i=0;ar[i]='\0';i++){
if(top < CAPACITY-1){
    top=top+1;
    stack[top]=ar[i];
}else{

printf("No space\n");
return -1;
}}
int pop(){
    if(top>=0){
    int value=stack[top];
    top=top-1;
 if(top==-1){
        printf("yes");

}
else{
    printf("no");
}

return -1;
}

int main(){
char ar[100];
printf("enter the charecter");
sacnf("%c",&ar);

}
