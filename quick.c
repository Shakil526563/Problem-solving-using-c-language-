#include<stdio.h>

void quicksort(int ar[55],int first,int last){
int i,j,pivot,temp,k;

if(first<last){

    pivot=first;
    i=first;
    j=last;
    while(i<j){

        while(ar[i]<=ar[pivot]&&i<last){
            i++;
        }
        while(ar[j]>ar[pivot]){
            j--;
        }
        if(i<j){
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;

        }

    }
    temp=ar[pivot];
    ar[pivot]=ar[j];
    ar[j]=temp;
    quicksort(ar,0,j-1);
    quicksort(ar,j+1,last);
 k++;

}


}
int main(){
int ar[55],n,i,k;
printf("Enter how many element you want:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
}
quicksort(ar,0,n-1);
printf("%d\n",k);
printf("Sorted the array :");
for(i=n-1;i>=0;i--){
    printf("%d ",ar[i]);
}
printf("\n");
return 0;
}
