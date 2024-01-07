#include<stdio.h>
void main()
{
    int choice=1;
    while(choice==1)
    {
        int num1,num2,num3;
        printf("Enter three numbers:");
        scanf("%d %d %d",&num1,&num2,&num3);
        if(num1>num2 && num1>num3)
        {
        printf("\nThe greatest number is %d",num1);
        }
        else if(num2>num3)
        {
        printf("\nThe greatest number is %d",num2);
        }
        else
        {
        printf("\nThe greatest number is %d",num3);
        }
        printf("\nDo you want to continue..?");
        printf("\n1=Continue,2=Exit");
        scanf("%d",&choice);
    }
    printf("\n*******END*OF*SESSION********");
}