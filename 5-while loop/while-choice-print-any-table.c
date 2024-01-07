#include<stdio.h>
void main()
{
    int choice=1;
    while(choice==1)
    {
        int num,i=1;
        printf("Enter the number: ");
        scanf("%d",&num);
        while(i<=10)
        {
            printf("\n%d X %d = %d",num,i,i*num);
            i++;
        }
        printf("\nDo you want to continue..?");
        printf("\n1=continue,2=exit");
        scanf("%d",&choice);
    }
    printf("\n//*****END OF SESSION*****//");
}