#include<stdio.h>
void main()
{
    float english, marathi, hindi, maths, science, total, percent;
    
    printf("Enter marks in English\t\t: ");
    scanf("%f",&english);

    printf("Enter marks in Marathi\t\t: ");
    scanf("%f",&marathi);

    printf("Enter marks in Hindi\t\t: ");
    scanf("%f",&hindi);

    printf("Enter marks in Mathematics\t: ");
    scanf("%f",&maths);

    printf("Enter marks in Science\t\t: ");
    scanf("%f",&science);

    total=english+marathi+hindi+maths+science;
    percent=(100*total)/500;

    printf("The total marks obtained\t: %f/500",total);
    printf("\nPercentage\t\t: %f",percent);

    if (percent>35)
    {
        printf("\nYOU ARE PASSED");
    }
    else
    printf("\nYOU ARE FAILED");
}