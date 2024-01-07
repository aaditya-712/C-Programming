#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        continue;    //if condition is true then it will skip the loop and continue with next iteration of outer loop
        printf("The value is : %d\n",i);
    }
}