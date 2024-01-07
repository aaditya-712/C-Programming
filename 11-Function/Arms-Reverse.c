

void reverse(int num)
{
    int rem,rev=0;
    while (num>0) 
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    printf("The reverse is: %d",rev);
}
void armstrong(int num)
{
    int rem,sum=0;
    int temp=num;
    while(num>0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    if(temp==sum)
    {
        printf("The number is an armstrong number.");
    }
    else
    {
        printf("The number is not an armstrong number.");
    }
}
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    reverse(num);
    printf("\n");
    armstrong(num);
}