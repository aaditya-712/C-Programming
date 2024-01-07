//Swapping of values with help of Temprory number

#include<stdio.h>
void main()
{
	int num1,num2,temp;
	printf("Enter the value of num1 and num2: ");
	scanf("%d %d",&num1,&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("The value of num1= %d and num2= %d",num1,num2);
}