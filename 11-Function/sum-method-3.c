/*

         NO ARGUMENT WITH RETURN TYPE

*/

#include<stdio.h>
int sum()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}

void main()
{
    int d,c;
    d=sum();
    c=sum();
    printf("Sum=%d",d);
    printf("\nSum=%d",c);
}