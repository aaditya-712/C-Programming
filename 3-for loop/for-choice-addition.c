#include<stdio.h>
void main()
{
    int choice=1;
    for(choice=1;choice==1;scanf("%d",&choice))
    {
        int a,b,sum;
        printf("Enter the first number: ");
        scanf("%d",&a);
        printf("Enter the second number: ");
        scanf("%d",&b);
        sum=a+b;
        printf("The sum of %d and %d is: %d",a,b,sum);
        printf("Do you want to continue?(1=Continue,2=Exit)");
    }
    printf("END");
}