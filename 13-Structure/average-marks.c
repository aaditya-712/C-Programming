//---------------------------------------Q2
//WAP to find the avg marks of class of 50 students

#include<stdio.h>
struct student
{
    int r;
    char name[100];
    float m;
}
s[50];
int main()
{
    int t,i,sum=0;
    printf("Enter the number of students present for test: ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("Enter Roll No of student %d: ", i + 1);
        scanf("%d", &s[i].r);
        
        printf("Enter Name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        
        printf("Enter Marks of student %d: ", i + 1);
        scanf("%f", &s[i].m);
    }
    printf("\nStudents Details: ");
    printf("\nRoll-No\tName\tMarks\n");
    for(i=0;i<t;i++)
    {
        printf("%d\t%s\t%f\n",s[i].r,s[i].name,s[i].m);
    }
    for(i=0;i<t;i++)
    {
        sum=sum+s[i].m;
    }
    printf("Avg marks : %f",((float)sum/t));
    return 0;
}