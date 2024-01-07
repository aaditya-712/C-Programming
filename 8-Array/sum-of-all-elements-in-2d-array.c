#include<stdio.h>
void main()
{
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int i,j,sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter element: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nSum of the Matrix is: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("The sum of the elements of the matrix is: %d",sum);
}