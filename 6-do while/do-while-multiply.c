#include<stdio.h>
void main()
{
    int choice=1;
    do
    {
        int a,b,mult;
        printf("Enter the two number: ");
        scanf("%d%d",&a,&b);
        mult=a*b;
        printf("The multiplication of %d with %d is: %d",a,b,mult);
        printf("\nDo you want to continue?(1=Continue,2=Exit)");
        scanf("%d",&choice);
    }
    while(choice==1);
    printf("END");
}