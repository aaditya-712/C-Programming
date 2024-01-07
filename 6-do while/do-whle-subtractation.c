#include<stdio.h>
void main()
{
    int choice=1;
    do
    {
        int a,b,sub;
        printf("Enter first numbers: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        sub=a-b;
        printf("\nSubtraction of %d and %d is :%d",a,b,sub);
        printf("\nDo you want to continue(1=Continue,2=Exit):");
        scanf("%d",&choice);
    }
    while (choice==1);
    printf("END");
}