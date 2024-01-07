//-------------------------------------------Q1
//WAP to find out maximum marks in a class with name, roll no

#include<stdio.h>
struct student
{
    int r;
    char name[100];
    float m;
}
s[40];

int main()
{
    int i,l=0,t,max;
    printf("Enter the total number of students: ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("Enter the Roll-No, Name and marks of the Students: ");
        scanf("%d %s %f",&s[i].r,&s[i].name,&s[i].m);
    }
    max = s[0].m;
    for(i=0;i<t;i++)
    {
        if(max < s[i].m)
        max = s[i].m;
        l=i;
    }
    printf("\nStudent details:\n");
    for(i=0;i<t;i++)
    {
        printf("%d\t%s\t%f\n",s[i].r,s[i].name,s[i].m);
    }
    printf("\nMaximum Marks Student Details:\n");
    printf("%d\t%s\t%f\n",s[l].r,s[l].name,max);
    return 0;
}