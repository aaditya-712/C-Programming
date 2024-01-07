#include<stdio.h>
void main()
{
    int arr[10]={12,23,45,78,89,56,22,13,46,79};
    int i;
    printf("Even numbers in the array: \n");
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd numbers in the array: \n");
    
    for(i=0;i<10;i++)
    if(arr[i]%2!=0)
    {
        printf("%d ",arr[i]);
    }
}