#include<stdio.h>
void main()
{
    int choice=1;
    while(choice==1)
    {
        int amount,total,discount;
        printf("Enter the amount spend: ");
        scanf("%d",&amount);
        if(amount>=0 && amount<=999)
        {
            printf("You are eligible for 2 percent discount.\n");
            discount=amount*2/100;
            total=amount-discount;
            printf("The amount to pay: %d\n",total);
        }
        else if(amount>=1000 && amount<=9999)
        {
            printf("You are eligible for 5 percent discount.\n");
            discount=amount*5/100;
            total=amount-discount;
            printf("The amount to pay: %d\n",total);
        }
        else
        {
            printf("You are eligible for 10 percent discount.\n");
            discount=amount*10/100;
            total=amount-discount;
            printf("The amount to pay: %d\n",total);
        }
        printf("Do you want to continue..?\n");
        printf("1=Continue,2=Exit\n");
        scanf("%d",&choice);
    }
    printf("END OF SESSION");
}