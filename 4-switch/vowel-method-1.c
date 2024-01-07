#include<stdio.h>
void main()
{
    char choice;
    printf("Enter a character:");
    scanf(" %c", &choice);
    switch(choice)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Vowel");
        break;

        default:
        printf("Consonant");
    }
}