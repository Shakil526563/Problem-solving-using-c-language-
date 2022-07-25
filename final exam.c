#include <stdio.h>

int main()
{
    int arr[10], copy[10];
    int i, n;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter elements of source array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        copy[i] = arr[i];
    }

    printf("\nElements of  array are : ");
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\nElements of copy array are : ");
    for(i=0; i<n; i++)
    {
        printf("%d\n", copy[i]);
    }

    return 0;
}
