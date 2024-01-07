#include<stdio.h>
#include<string.h>


//-----------Q1
/*
main()
{
    char a[]=("Welcome in c");
    int l;
    l=strlen(a);
    printf("Length of the string = %d",l);
}
*/

//-------------Q2
/*
main()
{
    char a[20]=("welcome in c");
    char b[20];
    strcpy(b,a);
    printf("%s\n%s",a,b);
}
*/

//-------------Q3
/*
main()
{
    char a[15]=("Aaditya");
    strrev(a);
    printf("%s",a);
}
*/

//-------------Q4
/*
main()
{
    char a[15]=("Welcome");
    char b[15]=(" in c");
    strcat(a,b);
    printf("%s",a);
}
*/

//------------Q5

main()
{
    char a[15]=("Welcome");
    char b[15]=("helcome");
    int s;
    s=strcmp(a,b);
    printf("%d",s);
}