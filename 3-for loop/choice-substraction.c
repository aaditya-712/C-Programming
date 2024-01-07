#include<stdio.h>
void main()
{
    int choice;
    for(choice=1;choice==1;)
    {
        int a,b,sub;
        printf("Enter a first number: ");
        scanf("%d",&a);
        printf("Enter a second number: ");
        scanf("%d",&b);
        sub=a-b;
        printf("The substraction of %d and %d is : %d",a,b,sub);
        printf("\nDo you want to continue?");
        printf("\n1=Continue,2=Exit\n");
        scanf("%d",&choice);
    }
    printf("END");
}