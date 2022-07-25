#include <stdio.h>
int main()
{
  int a[10],num,i;
  for(i=0;i<10;i++)
  {
    printf("Enter a number\n");
    scanf("%d",&a[i]);
  }
  printf("Enter the number");
  scanf("%d",&num);
  int check = 0;

  for(i=0;i<10;i++)
  {
      if(a[i] == num)
      {
        check = 1;
        break;
      }
  }

  if(check)
    printf("Found\n");
  else
    printf("Not found\n");

  return 0;
}
