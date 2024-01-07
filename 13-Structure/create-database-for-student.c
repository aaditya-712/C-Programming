//----------------------------------------------Q1
//WAP in c to create a database for a student.


struct student
{
    char name[200];
    int r;
    float n;
}a,r;
main()
{
    printf("Enter name, roll number and number of student: ");
    scanf("%s%d%f",&a.name,&a.r,&a.n);
    printf("Enter name, roll number and number of student: ");
    scanf("%s%d%f",&r.name,&r.r,&r.n);
    printf("Name\tRoll No.\tNumber of student\n");
    printf("%s\t%d\t%f\n",a.name,a.r,a.n);
    printf("%s\t%d\t%f\n",r.name,r.r,r.n);
}