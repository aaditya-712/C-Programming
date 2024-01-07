#include<stdio.h>
void main()
{
	float P=100000,R=11.11,N=4,SI,total;
	SI=(P*R*N)/100;
	total=P+SI;
	printf("The Simple Interest is %fRs",SI);
	printf("\nThe total amount to be paid with interest is %fRs",total);
}