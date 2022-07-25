
#include<stdio.h>
#include<string.h>
char reversed(char name){
int i;
char name1[50];
char result[55];
int size =strlen(name);
for(i=size-1;i>=0;i--){
result[i]=name1[i];
}
printf("%s ",result);
}

int main(){
char name;
printf("Enter your name:");
scanf("%s",name);

reversed(name);

}
