#include<stdio.h>
void main()
{
    int choice;
    printf("Enter a character: ");
    scanf(" %c",&choice);
    switch (choice)
    {
        case 'a':
        printf("Vowel");
        break;
        case 'e':
        printf("Vowel");
        break;
        case 'i':
        printf("Vowel");
        break;
        case 'o':
        printf("Vowel");
        break;
        case 'u':
        printf("Vowel");
        break;
        default:
        printf("Consonent");
    }
}