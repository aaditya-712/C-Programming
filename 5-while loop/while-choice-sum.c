#include<stdio.h>
void main()
{
    int choice=1;
    while(choice==1)
    {
        int a,b,sum;
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        sum=a+b;
        printf("\nSum of %d and %d is :%d",a,b,sum);
        printf("\nDo you want to continue..?");
        printf("\n1=continue,2=exit");
        scanf("%d",&choice);
    }
    printf("\n//*****END**OF**SESSION*****//\n");
}