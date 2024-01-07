#include<stdio.h>
void main()
{
	int amount=10000,offer=20,discount,sub;
	discount=(amount*offer)/100;
	sub=amount-discount;
	printf("The discounted amount is %dRs",discount);
	printf("\nThe total amount to be paid is %dRs",sub);
}