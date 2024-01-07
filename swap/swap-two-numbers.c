#include<stdio.h>
void main()
{
    int num1,num2,temp;
    printf("Enter the values of num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    printf("\nBefore swapping: num1 = %d\tnum2 = %d",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nAfter swapping : num1 = %d\tnum2 = %d",num1,num2);
   
}



 //swapping two numbers using temporary variable
    //using third number as a temprary storage
    //to store value of first number after swapping
    //and second number before swaping
    //this is called 3-way swap technique
    //swap(num1,num2) = {num1=num1+num2;num2=num1-num2;
    //				   num1=num1-num2;}
    //printf("\nBefore Swapping:\t%d\t%d",num1,num2);//printing original values
    //temp=num1;//storing value in temporary variable to be used later for storing other value
    //num1=num1+num2;//adding both numbers together
    //num2=(temp)-num2;//subtracting num2 from temp which contains sum of previous steps
    //num1=((temp)-(num2));//subtraction of num1 from temp which contains difference between previous steps
    /*
    * this can also be written like below
    * num1+=num2;*/