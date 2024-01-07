#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int search;
    printf("\nElements in the array are:\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter a number to be searched: ");
    scanf("%d",&search);
    for(i=0;i<=size;i++)
    {
        if(arr[i]==search)
        {
            printf("%d element is found at %d position.\n",search,i);
            break;
        }
    }
}