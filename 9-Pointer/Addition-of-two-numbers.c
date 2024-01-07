//-----------------------------------------------------Method-1
#include<stdio.h>
void main()
{
    int sum,num1=10,num2=12;
    int *a,*b,*c;
    a=&num1;
    b=&num2;
    c=&sum;
    sum=num1+num2;
    printf("The Addition is: %d",*c);
}


//-----------------------------------------------------------Method-2
#include <stdio.h>
// void main()
// {
//     int sum,num1=15,num2=25;
//     int *a,*b,*c;
//     a=&num1;
//     b=&num2;
//     c=&sum;
//     *c=*a+*b;
//     printf("The addition is :%d\n",sum);
// }
