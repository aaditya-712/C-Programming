#include<stdio.h>
void sum(int *a, int *b)
{
    int s,*z=&s;
    *z=*a+*b;
    printf("Sum : %d/n",s);
}
void main()
{
    int a=10,b=12,x=45,y=55;
    sum(&a,&b);
    sum(&x,&y);
}