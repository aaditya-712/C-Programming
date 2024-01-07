#include<stdio.h>
void main()
{
	int salary,DA,HRA,EPF,totalDeduct,Gsal;
	printf("Enter salary\t: ");
	scanf("%d",&salary);
	DA=salary*10/100;
	HRA=(salary-DA)*10/100;
	EPF=(salary-DA-HRA)*10/100;
	totalDeduct=DA+HRA+EPF;
	Gsal=salary-totalDeduct;
	printf("DA\t\t: %d\tRs.",DA);
	printf("\nHRA\t\t: %d\tRs.",HRA);
	printf("\nEPF\t\t: %d\tRs.",EPF);
	printf("\nTotal Deduction\t: %d\tRs.",totalDeduct);
	printf("\nGross Salary\t: %d\tRs.",Gsal);
}