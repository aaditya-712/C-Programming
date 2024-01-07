#include<stdio.h>
void main()
{
    int choice;
    printf("Enter a number b/w {1-6} : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
           printf("9 September 1975");
           break;
        case 2:
           printf("22 January 1977");
           break;
        case 3:
           printf("6 June 1946");
           break;
        case 4:
           printf("5 February 2001");
           break;
        case 5:
           printf("7 December 2003");
           break;
        case 6:
           printf("23 March 2000");
           break;
        default:
           printf("Invalid Choice");
    }
}