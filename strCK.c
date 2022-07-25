#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top=-1;

void push(int x){
if(top < CAPACITY-1){
    top=top+1;
    stack[top]=x;
    printf("add item in stack %d\n",x);
}else{

printf("No space\n");
return -1;
}


}
int pop(){
if(top>=0){
    int value=stack[top];
    top=top-1;
    return value;
}else{
printf("Empty stack\n");
return -1;
}

}
int peek(){
if(top >= 0){
    return stack[top];

}
printf("Empty stack\n");
return -1;

}
int main(){
peek();
push(10);
push(15);
push(13);
printf("   pop item %d\n",pop());
push(16);
printf("top item %d\n",peek());

}
