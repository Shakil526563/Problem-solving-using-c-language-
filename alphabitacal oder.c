#include<stdio.h>
int main(){
int i;
char C;
scanf("%c",&C);
for(i='a';i<'z';i++){
    if(i==C){
        printf("%c\n",i+1);

    break;
}
    }

}
