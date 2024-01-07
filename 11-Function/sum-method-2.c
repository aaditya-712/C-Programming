/*

       WITH ARGUMENT NO RETURN TYPE

*/

#include<stdio.h>
void sum(int x, int b)
{
    int c;
    c=x+b;
    printf("\nThe sum is %d",c);
}

//FUNCTION DECLARATION
void main()
{
    int a,b;
    printf("Enter the two number: ");
    scanf("%d%d",&a,&b);
    sum(a,b);  //FUNCTION CALLING
    sum(12,23);
}