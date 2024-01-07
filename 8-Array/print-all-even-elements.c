#include<stdio.h>
void main()
{
    int i,size;
    printf("Enter size array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("Enter element %d\t: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Even numbers are: ");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        printf("%d ",arr[i]);
    }
}