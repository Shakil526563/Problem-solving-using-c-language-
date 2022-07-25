#include<stdio.h>
#include<string.h>
int palindron(char pl[]){
int first=0;
int last=strlen(pl)-1;
while(last>first){
    if(pl[first++]!=pl[last--]){
        printf("Not palindron");
        return 0;
    }
}

printf("Palindron");
}
int main(){
char pl[]="Shakil";
palindron(pl);
return 0;
}
