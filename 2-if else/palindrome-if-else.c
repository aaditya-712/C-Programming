#include<stdio.h>
void main()
{
	int num,rem,rev=0;
	printf("Enter number: ");
	scanf("%d",&num);
	int store=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Reverse is: %d\n",rev);
	if(store==rev)
	{
		printf("The number %d is Palindrome.\n",store);
	}
	else
	{
		printf("The number %d is not Palindrome.\n",store);
	}
}