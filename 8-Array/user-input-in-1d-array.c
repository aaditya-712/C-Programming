#include<stdio.h>
void main()
{
    int i,len;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    int arr[len];

    for(i=0;i<len;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The array is: \n");
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
}