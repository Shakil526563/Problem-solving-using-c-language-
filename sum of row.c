
#include<stdio.h>
int main(){
   int arr[5][5];
   int i, j;
   int sum=0;

   printf(" NOW Two Dimensional array elements:\n");
   for(i=0; i<5; i++) {
      for(j=0;j<5;j++) {
         printf("%d ", arr[i][j]);
     if (j==i){
            printf("\n");
     }
      }
   }

        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                sum = sum + arr[i][j] ;
            }

            printf("Sum of the %d row is = %d\n", i, sum);






            sum=0;

}
return 0;
}
