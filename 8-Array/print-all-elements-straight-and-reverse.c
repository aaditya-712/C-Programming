#include<stdio.h>
void main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0;i<10;i++)   //printing all elements of an array
    {
        printf("%d\t",arr[i]);
    }

    printf("\nThe Reverse of the array is: \n");
    for(i=9;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
}