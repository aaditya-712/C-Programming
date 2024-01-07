#include<stdio.h>
void main()
{
    int i,size,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("Enter element %d\t: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of array = %d",sum);
}