#include<stdio.h>
void main()
{
    int row,col,sum=0;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of columns:");
    scanf("%d",&col);
    int arr1[row][col],arr2[row][col],arr3[row][col],i,j;
    printf("Enter elements of the first array: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter elements of the second array: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nThe entered first array is: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nThe entered second array is: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    //Adding two arrays
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\nThe third array is: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}