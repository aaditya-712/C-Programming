#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("The value is : %d\n",i);
        if(i==7)
        break;
    }
}