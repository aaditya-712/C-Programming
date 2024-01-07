//merge arr1 and arr2 method 1

#include<stdio.h>
void main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    
    int arr3[10],i;
    for(i=0;i<5;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=5;i<10;i++)
    {
        arr3[i]=arr2[i-5];
    }
   printf("Merged array is:");
   for(i=0;i<=9;i++)
    {
       printf("%d ",arr3[i]);
    }
}



//merge arr1 and arr2 method 1

// #include<stdio.h>
// void main()
// {
//     int arr1[5]={1,2,3,4,5};
//     int arr2[5]={6,7,8,9,10};
//     int arr3[10],i;

//     for(i=0;i<5;i++)
//     {
//         arr3[i]=arr1[i];
//     }
//     for(i=0;i<5;i++)
//     {
//         arr3[i+5]=arr2[i];
//     }
//     printf("Merged array is: ");
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",arr3[i]);
//     }
// }