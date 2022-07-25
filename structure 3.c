
#include<stdio.h>
struct student{
int roll;
int age;
char name[10];
char addr[10];
int mark;

};
int main(){
struct student s1[15];
int i;
for(i=0;i<15;i++){

    printf("%d\n",i+1);
    s1[i].roll=i+1;
    scanf("%s",&s1[i].name);
    scanf("%d",&s1[i].age);
    scanf("%s",s1[i].addr);
    scanf("%d",&s1[i].mark);
}
for(i=0;i<15;i++){

    printf("%d\n",i+1);
    printf("Roll=%d\n",s1[i].roll);
    printf("Name=%s\n",s1[i].name);
    printf("Age =%d\n",s1[i].age);
    printf("Address=%s\n",s1[i].addr);
    printf("Mark=%d\n",&s1[i].mark);
}
}
