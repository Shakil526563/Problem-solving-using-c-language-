#include<stdio.h>
int main()
{
    int x;
    float r;
    double result;
    scanf("%d",&x);
    scanf("%f",&r);
    if(r>x)
    {
        if(x%5==0)
        {
            result=r-x-0.5;
            printf("%.2lf\n",result);
        }
        else
        {
            printf("%.2f\n",r);
        }

    }

    else{
        printf("%.2f\n",r);}

}
