#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size in array: ");
    scanf("%d",&size);
    int a[size],i;
    for(i=0;i<size;i++)
    {
        printf("Enter Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int b[size];
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("Enter Element %d: ",i+1);
        scanf("%d",&b[i]);
    }
    int sum[size];
    for(i=0;i<size;i++)
    {
        sum[i]=a[i]+b[size-i-1];
    }
    printf("\nSum of two arrays: \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",sum[i]);
    }
}