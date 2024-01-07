#include<stdio.h>
void main()
{
    float english,marathi,hindi,maths,science,total,percent;

    printf("Enter marks in English \t: ");
    scanf("%f",&english);

    printf("Enter marks in Marathi \t: ");
    scanf("%f",&marathi);

    printf("Enter marks in Hindi \t: ");
    scanf("%f",&hindi);

    printf("Enter marks of Maths \t: ");
    scanf("%f",&maths);

    printf("Enter marks in Science \t: ");
    scanf("%f",&science );

    total=english+marathi+hindi+maths+science;
    percent=total*100/500;

    printf("\nTotal \t\t: %f",total);
    printf("\nPercent \t: %f\n",percent);

    if(percent>90)
    printf("\nOUTSTANDING");

    else if(percent>80)
    printf("\nEXCELLENT");

    else if(percent>70)
    printf("\nVERY GOOD");

    else if(percent>60)
    printf("\nGOOD");

    else if(percent>50)
    printf("\nSATISFACTORY");

    else if(percent>35)
    printf("\nFAIR");
    
    else
    printf("\nFAIL");
}