#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    printf("\nBefore swapping: num1=%d \tnum2=%d",num1,num2);
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("\nAfter swapping : num1=%d \tnum2=%d",num1,num2);
}