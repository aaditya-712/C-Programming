#include<stdio.h>
void main()
{
    int choice=1;
    for(choice=1;choice==1;scanf("%d",&choice))
    {
        int choice;
        printf("\n1=Reverse Number\n2=Palindrome\n3=Armstrong\n4=Perfect Number\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                int rem,num,rev=0,store;
                printf("Enter a number: ");
                scanf("%d",&num);
                store=num;
                while(num>0)
                {
                    rem = num % 10;
                    rev = (rev * 10) + rem;
                    num = num / 10;
                }
                printf("The Reverse of %d is %d",store,rev);
            }
            break;

            case 2:
            {
                int rem,num,rev=0,store;
                printf("Enter a number: ");
                scanf("%d",&num);
                store=num;
                while(num>0)
                {
                    rem = num % 10;
                    rev = rev * 10 + rem;
                    num =  num / 10;
                }
                if(store==rev)
                {
                    printf("%d is Palindrome Number.",store);
                }
                else
                {
                    printf("%d is not Palindrome Number.",store);
                }
                break;

                case 3:
                {
                    int num,rem,sum=0;
                    printf("Enter the number: ");
                    scanf("%d",&num);
                    int store=num;
                    while(num>0)
                    {
                        rem = num % 10;
                        sum = sum + rem;
                        num = num / 10;
                    }
                    printf("Sum of digits in %d is :%d",store,sum);
                }
                break;

                case 4:
                {
                    int num;
                    printf("Enter a number: ");
                    scanf("%d",&num);
                    int i=1,sum=0;
                    while(i<num)
                    {
                        if(num%i==0)
                        {
                            sum = sum + i;
                        }
                        i++;
                    }
                    if(sum == num)
                    {
                        printf("\nThe given number is Perfect.");
                    }
                    else
                    {
                        printf("\nThe given number is not Perfect.");
                    }
                }
                break;

                default:
                printf("\nInvalid Choice");
                break;
            }
        }
        printf("\nDo you want to Continue?");
        printf("\n1=Continue,2=Exit");
    }
    printf("\nEND\n");
}