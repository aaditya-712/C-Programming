#include<stdio.h>
void main()
{
    int row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    int arr[row][col],i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe entered array is:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max=arr[0][0];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    printf("\nThe maximum number in the array is: %d",max);
}