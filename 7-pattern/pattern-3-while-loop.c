#include<stdio.h>
void main()
{
    int rows;
    printf("Enter a number: ");
    scanf("%d",&rows);
    int i=1;
    while(i<=rows)
    {
        int j=1;
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        i++;
        printf("\n");
    }
}