#include<stdio.h>
void main()
{
    int choice=1;
    for(choice=1; choice==1;)
    {
{
    int choice;
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    
    int a,b,c,d,x,y,m,n;
    int result;

    switch(choice)
    {
        case 1:
        printf("\nEnter two numbers: ");
        scanf("%d %d",&a,&b);
        result=a+b;
        printf("The addition of %d and %d is %d",a,b,result);
        break;

        case 2:
        printf("Enter two numbers: ");
        scanf("%d %d",&c,&d);
        result=c-d;
        printf("The substraction of %d and %d is %d",c,d,result);
        break;

        case 3:
        printf("Enter two numbers: ");
        scanf("%d %d",&x,&y);
        result=x*y;
        printf("The multiplication of %d and %d is %d",x,y,result);
        break;

        case 4:
        printf("Enter two numbers: ");
        scanf("%d %d",&m,&n);
        result=m/n;
        printf("The division of %d by %d is %d",m,n,result);
        break;

        default:
        printf("Invalid choice!");
    }
}
printf("\n\nDo you want to continue?\n");
printf("1=continue,2=exit\n");
scanf("%d",&choice);
}
printf("\nEND");
}