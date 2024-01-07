#include<stdio.h>
void main()
{
    int num,i=1;
    printf("Enter the number, you want to generate table of : ");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("\n%d X %d = %d",num,i,i*num);
        i++;
    }
}