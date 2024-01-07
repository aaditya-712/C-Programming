#include<stdio.h>
void main()
{
    int amount,discount,total;
    printf("Enter the total bill : ");
    scanf("%d",&amount);

    if(amount>=10000 && amount<=15000)
    {
    printf("You are eligible for discount of 12%");
    discount=amount*12/100;
    printf("Total amount to pay: %d",discount);
    }

	else if(amount>=15000 && amount<=20000)
	{
    printf("You are eligible for discount of 15%");
    discount=amount*15/100;
    printf("Total amount to pay: %d",discount);
    }
    
    else if(amount>=25000 && amount<=25000)
    {
    printf("You are eligible for discount of 20%");
    discount=amount*20/100;
    printf("Total amount to pay: %d",discount);
    }
    
    else
    {
    printf("Sorry you cannot get any discount");
    printf("Total amount to pay: %d",amount);
    }
}