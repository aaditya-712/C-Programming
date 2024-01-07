#include<stdio.h>
void main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int i=1;
    while(i<=rows)
    {
        int j=1;
        while(j<=i)
        {
            printf("%d",i);
            j++;
        }
        i++;
        printf("\n");
    }
}