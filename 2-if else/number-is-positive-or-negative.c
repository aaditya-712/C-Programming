#include <stdio.h>
void main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d",&number);

    if(number>0)
    printf("%d is positive number.\n",number);

    else if(number<0)
    printf("%d  is a negetive number.",number);

    else
    printf("\n%d is neither positive nor negative",number);
}