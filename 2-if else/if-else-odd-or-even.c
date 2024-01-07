#include<stdio.h>
void main()
{
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    if(number%2==0)
    printf("\nEven");
    else
    printf("\nOdd");
}