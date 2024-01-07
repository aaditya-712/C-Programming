#include<stdio.h>
void main()
{
    int choice=1;
    do
    {
        int a,b,sum;
        printf("Enter the first number: ");
        scanf("%d",&a);
        printf("Enter the second number: ");
        scanf("%d",&b);
        sum=a+b;
        printf("\nThe sum of %d and %d is :%d\n",a,b,sum);
        printf("Do you want to continue(1=Continue,2=Exit):");
        scanf("%d",&choice);
    }
    while(choice==1);
    printf("END");
}