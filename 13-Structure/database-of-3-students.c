//-----------------------------------
//     Structure with Array
//-----------------------------------

struct student
{
    char name[200];
    int r;
    int age;
} a[2];
main()
{
    int i;
    for(i=0;i<=2;i++)
    {
        printf("Enter the Name, Roll No, Age of the sudents: ");
        scanf("%s%d%d",&a[i].name,&a[i].r,&a[i].age);
    }
    printf("\nName\tRoll-No\tAge\n");
    for(i=0;i<=2;i++)
    {
        printf("%s\t%d\t%d\n",a[i].name,a[i].r,a[i].age);
    }
}