#include<stdio.h>
void main()
{
    int num,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int store=num;
    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    while(num>0);
    printf("The reverse is: %d\n",rev);
    if(store==rev)
    {
        printf("The %d is palindrome.",store);
    }
    else
    {
        printf("The %d is not palindrome.",store);
    }
}