#include<stdio.h>
void main()
{
    int age,by,cy;
    printf("Enter current year: ");
    scanf("%d",&cy);
    printf("Enter your birth year: ");
    scanf("%d",&by);
    age=cy-by;
    printf("Your age is %d.\n",age);
    if(age>=18)
    printf("YOU ARE ELLIGIBLE TO VOTE");
    else
    printf("YOU CANT'T VOTE");
}