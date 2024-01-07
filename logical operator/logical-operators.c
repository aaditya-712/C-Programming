#include<stdio.h>
void main()
{
    int num1,num2;
    num1=34;                         //&, |, ! are logical operators
    num2=56;
    printf("both numbers are less than 35 : %d\n",num1<35 && num2<35);  //if any one condition is flase then answer is false
    printf("any numbers are less than 35 : %d\n",num1<35 || num2<35);   //if any one condition is true then answer is true
    printf("num1 is less than 10 : %d",!num1<10);                       //if the answer is true then answer is false and false is true        
}