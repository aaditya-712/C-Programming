int palindrome(int num)
{
    int rem,rev=0;
    while(num>0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number to check Palindrome: ");
    scanf("%d",&num);
    int a=palindrome(num);
    if(a==num)
    {
        printf("\n%d is Palindrome.",a);
    }
    else
    {
        printf("\n%d is not Palindrome.",a);
    }
}