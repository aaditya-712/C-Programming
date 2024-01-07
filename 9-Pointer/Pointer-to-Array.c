#include<stdio.h>
void main()
{
    int a[5]={12,45,78,89,56},i;
    printf("Size of array: %d\n",sizeof(a));
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(a+i));
    }
}