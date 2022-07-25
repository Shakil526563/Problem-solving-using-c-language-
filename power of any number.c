#include<stdio.h>
#include<math.h>
int main(){
double prin,time,rate,interest;
scanf("%lf%lf%lf",&prin,&time,&rate);
interest=prin*pow((1+rate/100),time);
printf("Interest the number %.2lf =%.2lf",prin,interest);
return 0;

}


