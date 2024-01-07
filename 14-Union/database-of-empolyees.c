//------------------------------
//          UNION
//------------------------------
//--------------Q1
//WAP in c to create a database of a employee with input name, employee id salary using union
// NOTE :- 'union' is responsible of data loss thats why we used 'struct'instead of union. 

#include<stdio.h>
#include<string.h>
struct employee
{
    char name[100];
    char id[50];
    float salary;
}
e[50];
int main()
{
    int i,l;
    printf("Enter the number of employees: ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("Enter Name, id and salary of employee: ");
        scanf("%s%s%f",&e[i].name,&e[i].id,&e[i].salary);
    }
    printf("\nName of Employee\tEmployee-ID\tSalary\n");
    for(i=0;i<l;i++)
    {
        printf("%s\t%s\t%f\n",e[i].name, e[i].id, e[i].salary);
    }
    return 0;
}