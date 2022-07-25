
#include <stdio.h>
struct student
{
  int roll_no;
  char name[30];
  int age;
  char address[50];
};

void func1(struct student st[], int size) {
    int i;
  printf("Students having age = 14\n");
  for( i=0; i<size; i++) {
  	if(st[i].age == 14) {
  	  printf("%s\n", st[i].name);
  	}
  }
}
void Func2(struct student st[], int size) {
    int i;
  printf("Students having even roll number\n");
  for( i=0; i<size; i++) {
  	if((st[i].roll_no)%2 == 0) {
  	  printf("%s\n", st[i].name);
  	}
  }
}

void Func3(struct student st[], int size) {
    int i;
  printf("Students whose roll number is entered\n");
  for(i=0; i<size; i++) {
  	if((st[i].roll_no > 0) && (st[i].roll_no <= 20)) {
  	  printf("%s\n", st[i].name);
  	}
  }
}
int main()
{
  struct student stud[10];
  for(int i=0; i<10; i++) {    /* taking input of details */
    printf("Student %d\n",i+1);
    printf("Enter roll no. :\n");
    scanf("%d", &stud[i].roll_no);
    printf("Enter name :\n");
    scanf("%s",stud[i].name);
    printf("Enter age :\n");
    scanf("%d", &stud[i].age);
    printf("Enter address :\n");
    scanf("%s",stud[i].address);
  }
  func1(stud, 10);
  Func2(stud, 10);
  Func3(stud, 10);
  return 0;
}

