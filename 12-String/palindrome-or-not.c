// Entered string is Palindrome or not

main()
{
    char a[100],b[100];
    int i;
    printf("Enter the first string: ");
    gets(a);
    strcpy(b,a);
    strrev(a);
    if(strcmp(a,b)==0)
    {
        printf("\nThe entered string is palindrome");
    }
    else
    {
        printf("\nThe entered string is not palindrome");
    }
}