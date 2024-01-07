//prime number in c

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int isPrime = 1;
    int i=2;
    while(i<num)
    {
        if(num%i==0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }
    if(isPrime==1)
    printf("\nThe given number %d is prime",num);
    else
    printf("\nThe given number %d isn't prime",num);
}