#include<stdio.h>
int reverse()
{
    int num,rem,rev=0;
    printf("Enter a number to be reversed: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}

void main()
{
    int rev;
    rev = reverse();
    printf("\nReversed Number is :%d",rev);
}