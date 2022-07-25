
#include<stdio.h>


void main()
{
  int i,n,Sum=0,numbers;
  float Average;

  printf("\nPlease Enter How many Number you want?\n");
  scanf("%d",&n);

  printf("\nPlease Enter the elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
   }

  Average = Sum/n;
int a[200],Minimum,Maximum;
int Min_Position , Max_Position;;
  for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

  	Minimum = a[0];
  	Maximum = a[0];

	for(i=1; i<n; i++)
   	{
    	if(Minimum > a[i])
     	{
       		Minimum = a[i];
       		Min_Position = i;
	 	}
	   	if(Maximum < a[i])
     	{
       		Maximum=a[i];
       		Max_Position = i;
     	}
   	}

  	printf("\n Smallest element in an Array = %d", Minimum);
  	printf("\n Index position of the Smallest element = %d", Min_Position);

  	printf("\n Largest element in an Array = %d", Maximum);
  	printf("\n Index position of the Largest element = %d", Max_Position);
  	return 0;

  printf("\nSum of the %d Numbers = %d",n, Sum);
  printf("\nAverage of the %d Numbers = %.2f",n, Average);

  return 0;
}
