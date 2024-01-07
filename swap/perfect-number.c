//perfect number in c

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number to check Perfect number: ");
    scanf("%d",&num);
    int i=1,sum=0;
    while(i<num) //1,2,3,4,5
    {
        if(num%i==0) //t,t,t
        {
            sum=sum+i; //1,3,6
        }
        i++;
    }
    if (sum == num)
    {
        printf("\nThe given Number is a perfect number");
    }
    else
    {
        printf("\nThe given number is not a perfect number");
    }
}