//swap values using multiplication and division

#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter the value of num1 and num2: ");
	scanf("%d %d",&num1,&num2);
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	printf("The values of num1= %d and num2= %d",num1,num2);
}