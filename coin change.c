#include<stdio.h>

void insertion (int ar[],int N,int S,int num[])
{
    int i,j,key;
    for(j=1; j<N; j++)
    {
        key=ar[j];
        i=j-1;
        while(j>=0&&ar[i]>key)
        {
            ar[i+1]=ar[i];
            i=i-1;
        }
        ar[i+1]=key;
    }
    int cont=0;
    for(j=N-1; j>=0; j--)
    {
        //while(S>0)
        //{

            if(S>=ar[j])
            {
                int num;

                num[j]=S/ar[j];
                cont=cont+num[j];
                S=S-num[j]*ar[j];

            }

        }
        if(S==0)
        {
            printf("cont: %d\n",cont);
        }
        for (i = 0; i < N; i++)
        {

            if (num[i] != 0)
            {

                for(j=1; j<=num[i]; j++)
                {
                    printf("%d ",ar[j]);
                }
            }


            else
            {
                prinf("imposible");

            }

        }


        int main()
        {
            int a;
            scanf("%d",&a);
            int ar[a];
            for(int i=0; i<a; i++)
            {
                scanf("%d",ar[i]);
            }
            int s;
            scanf("%d",&s);

            int num[a];
            for(int i=0; i<a; i++)
            {
                num[i]=0;
            }
            insertion(ar,a,s,num);
        }

