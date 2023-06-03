#include<stdio.h>
int main()
{
    int arr[10], i;
    printf("Enter any 10 array elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("\nAll Even Array elements are:\n");
    for(i=0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ", arr[i]);
        }
    }
}