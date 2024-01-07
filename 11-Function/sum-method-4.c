/*

      WITH ARGUMENT WITH RETURN TYPE

*/

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Sum is: %d",sum(a,b));
    printf("\nSum is: %d",sum(12,22));
}

int sum(int x, int y)  // Function definition for the function 'sum' with arguments and return type as integer
{
    int c;
    c=x+y;
    return c;
}