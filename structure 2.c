#include<stdio.h>
struct student{
int roll;
int age;
char name[10]

};
int main(){
struct student s1[5];
int i;
for(i=0;i<5;i++){

    printf("%d\n",i+1);
    s1[i].roll=i+1;
    scanf("%s",&s1[i].name);
    scanf("%d",&s1[i].age);
}
for(i=0;i<5;i++){

    printf("%d\n",i+1);
    printf("Roll=%d\n",s1[i].roll);
    printf("Name=%s\n",s1[i].name);
    printf("Age =%d\n",s1[i].age);
}
for(i=0;i<5;i++){
    if(s1[i].roll==2){
    printf("%d",i+1);
    printf("Roll=%d",s1[i].roll);
    printf("Name=%s",s1[i].name);
    printf("Age =%d",s1[i].age);
}


}
}
