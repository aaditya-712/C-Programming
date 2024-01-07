void sum()
{
    int a,b,c;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum = %d",c);
}

void sub()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Substraction = %d",c);
}

void mult()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("Multiplication = %d",c);
}

void div()
{
    int a,b,c;
    printf("Enter dividend and divisor: ");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("Division = %d",c);
}

#include<stdio.h>
void main()
{
    printf("\nSUM\n");
    sum();
    printf("\nSUBSTRACTION\n");
    sub();
    printf("\nMULTIPLICATION\n");
    mult();
    printf("\nDIVISION\n");
    div();
}
