#include<stdio.h>
void main()
{
    int num,*n;
    n=&num;
    printf("Enter a number: ");
    scanf("%d",n);          //no need to use '&' or '*' when using pointer
    printf("\nThe entered number is %d\n",num);
}