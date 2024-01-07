#include<stdio.h>
void main()
{
    int amount,discount,total,saveAmount;
    printf("Enter the total bill : ");
    scanf("%d",&amount);

    if(amount>=10000 && amount<=15000)
    {
    printf("You are eligible for discount of 12 percent\n");
    discount=amount*12/100;
    total=amount-discount;
    saveAmount=amount-total;
    printf("Total amount to pay: %d",total);
    printf("\nYou saved: %d",saveAmount);
    }

    else if(amount>=15000 && amount<=20000)
    {
    printf("You are eligible for discount of 15 percent\n");
    discount=amount*15/100;
    total=amount-discount;
    saveAmount=amount-total;
    printf("Total amount to pay: %d",total);
    printf("\nYou saved: %d",saveAmount);
    }

    else if(amount>=20000 && amount<=25000)
    {
    printf("You are eligible for discount of 20 percent\n");
    discount=amount*20/100;
    total=amount-discount;
    saveAmount=amount-total;
    printf("Total amount to pay: %d",total);
    printf("\nYou saved: %d",saveAmount);
    }
    
    else
    {
    printf("Sorry you cannot get any discount\n");
    printf("Total amount to pay: %d",amount);
    }
}