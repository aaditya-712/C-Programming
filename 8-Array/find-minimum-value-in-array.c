#include<stdio.h>
void main()
{
    int i,size,min;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("Enter element 1: ");
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for (i=1;i<size;i++)
    {
        if(arr[i]<min)
        min = arr[i];
    }
    printf("The maximum value in the array is %d",min);
}