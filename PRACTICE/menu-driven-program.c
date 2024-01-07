//create a menu driven program for sum, sub, mult, div.

#include<stdio.h>
void main()
{
    int choice;
    printf("1=Addition\n2=Substraction\n3=Multiplication\n4=Division\n5=Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    int a,b,c,d,e,f,g,h;
    int result;

    switch(choice)
    {
        case 1:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        result=a+b;
        printf("\nThe Sum is %d.",result);
        break;

        case 2:
        printf("Enter two numbers: ");
        scanf("%d%d",&c,&d);
        result=c-d;
        printf("\nThe Subtraction is %d.",result);
        break;

        case 3:
        printf("Enter two numbers: ");
        scanf("%d%d",&e,&f);
        result=e*f;
        printf("\nThe Multiplication is %d.",result);
        break;

        case 4:
        printf("Enter two numbers: ");
        scanf("%d%d",&g,&h);
        if (h!=0)
        result=g/h;
        else
        printf("\nError! Division by zero not allowed.");
        printf("\nThe Division is %.2lf.",result);
        break;

        case 5:
        printf("End of session!!!");
        exit(0);
    }
}