void sum(int a, int b)
{
    printf("\nSum \t\t= %d",a+b);
}

void sub(int a, int b)
{
    printf("\nSubstraction \t= %d",a-b);
}

void mult(int a, int b)
{
    printf("\nMultiplication \t= %d",a*b);
}

void div(int a, int b)
{
    printf("\nDivision \t= %d",a/b);
}

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    sum(a,b);
    sub(a,b);
    mult(a,b);
    div(a,b);
}