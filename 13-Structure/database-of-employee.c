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

    if(l < 1 || l > 50) {
        printf("Error: Invalid number of employees.\n");
        return 1;
    }

    for(i=0;i<l;i++)
    {
        printf("Enter Name, id and salary of employee: ");
        scanf("%s %s %f",&e[i].name,&e[i].id,&e[i].salary);

        if(strlen(e[i].name) > 99 || strlen(e[i].id) > 49) {
            printf("Error: Name or id too long.\n");
            return 1;
        }
    }

    printf("\nName of Employee\tEmployee-ID\tSalary\n");
    for(i=0;i<l;i++)
    {
        printf("%s\t%s\t%f\n",e[i].name, e[i].id, e[i].salary);
    }

    return 0;
}