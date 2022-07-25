#include<stdio.h>
void array(int arr[],int size)
{
    int i;
    for(i=0;i<4;i++){
        printf("%d  ",arr[i]);
    }
}


int main(){
int ar[]={2,6,5,7};
array (ar,4);

return 0;
}
