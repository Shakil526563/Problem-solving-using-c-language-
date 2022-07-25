#include<stdio.h>
#include<string.h>

int main(){

char str[55];
int i;
printf("Enter the String\n");
gets(str);
for(i=0;i<=strlen(str);i++){
    if(str[i]>=97&&str[i]<=122){
        str[i]=str[i]-32;
    }
}
printf("Upper casse string =%s",str);
return 0;
}
