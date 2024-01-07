// Copy one string into another string without using handling function

main()
{
    char a[10],b[10];
    int i,l=0;
    printf("Enter the string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<=l;i++)
    {
        b[i]=a[i];
    }
    puts(b);
}