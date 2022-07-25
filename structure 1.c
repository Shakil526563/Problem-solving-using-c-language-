#include <stdio.h>
struct student{
int roll_no;
char name[20];
int age;
float mark;

};
int main(){
struct student s1;
s1.roll_no=121;
strcpy(s1.name,"shakil");
//s1.name="shakil";
s1.age=20;
s1.mark=80;

printf("Roll=%d\n Name=%s\n Age=%d\n Mark=%f\n",s1.roll_no,s1.name,s1.age,s1.mark);

}
