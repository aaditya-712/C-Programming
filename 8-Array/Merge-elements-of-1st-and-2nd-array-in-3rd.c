#include<stdio.h>
void main()
{
    int size1,size2,i;
    printf("Enter size of first array: ");
    scanf("%d",&size1);
    int arr1[size1];
    for(i=0;i<size1;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter size of second array: ");
    scanf("%d",&size2);
    int arr2[size2];
    for(i=0;i<size2;i++)
    {
        printf("Enter elemenrt %d: ",i+1);
        scanf("%d",&arr2[i]);
    }
    int size3=size1+size2;
    int arr3[size3];
    for(i=0;i<size3;i++)
    {
        if(i<size1)
        {
            arr3[i]=arr1[i];
        }
        else
        {
            arr3[i]=arr2[i-size1];
        }
    }
    printf("The Merged Array is: \n");
    for(i=0;i<size3;i++)
    {
        printf("%d ",arr3[i]);
    }
}