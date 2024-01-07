#include<stdio.h>
void main()
{
    int choice;
    printf("Enter a number:");
    scanf(" %d",&choice);
    switch (choice%2==0)
    {
        case 1:
        printf("Even");
        break;
        default:
        printf("Odd");
        break;
    }
}