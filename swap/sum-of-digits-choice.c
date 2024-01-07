#include<stdio.h>
void main()
{
    int choice=1;
    while(choice==1)
    {
        int num,rem,sum=0;
        printf("\nEnter number: ");
        scanf("%d",&num);
        while(num>0)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        printf("Sum of digits: %d",sum);
        printf("\nDo you want to continue..?");
        printf("\n1=Continue,2=Exit");
        scanf("%d",&choice);
    }
    printf("\n*****END*OF*SESSION*****");
}