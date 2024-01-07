// Calculate Length of string without using string handling functions

main()
{
    char a[100];
    int i,l=0;
    printf("Enter the String: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    printf("The length of the string is %d , %d",l,strlen(a));
}