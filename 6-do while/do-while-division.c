#include<stdio.h>
void main()
{
    int choice=1;
    do
    {
        int a,b,div;
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        div=a/b;
        printf("The division of %d by %d is: %d",a,b,div);
        printf("\nDo you want to continue?(1=Continue,2=Exit)\n");
        scanf("%d",&choice);
    }
    while(choice==1);
    printf("END");
}