// Reverse a string without using string handling function

#include<stdio.h>
#include<string.h>
void main()
{
    int i,l;
    printf("Enter the size of the string: ");
    scanf("%d",&l);
    char a[l],b[l];
    for(i=0;i<l;i++)
    {
        scanf("%s",&a[i]);
    }
    int j=0;
    for(i=l-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("\n%s , %s",a,b);
}