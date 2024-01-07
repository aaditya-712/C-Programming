#include<stdio.h>
void main()
{
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int i,j;
    printf("Enter elements of the array: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter element %d: ",i+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Elements in the matrix are: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}