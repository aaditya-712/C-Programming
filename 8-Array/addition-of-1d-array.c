#include<stdio.h>
void main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={10,9,8,7,6},sum[5],i;
    for(i=0;i<5;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    printf("Sum of 1d array: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",sum[i]);
    }
}