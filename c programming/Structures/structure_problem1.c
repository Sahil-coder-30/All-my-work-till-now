#include <stdio.h>
#include <strings.h>

struct employee

{
    int Code;
    char Name[10];
    float Salary;
};
int main()

{
    struct employee e1, e2, e3;

    {
        {
            printf("Enter the code of the Employee.1 :\n");
            scanf("%d", &e1.Code);
        }
        {
            printf("Enter the salary of the Employee.1 :\n");
            scanf("%f", &e1.Salary);
        }
        {
            printf("Enter the Name of the Employee.1 :\n");
            scanf("%s", &e1.Name);
        }
    }
    {

        {

            printf("Enter the code of the Employee.2 :\n");
            scanf("%d", &e2.Code);
        }
        {
            printf("Enter the salary of the Employee.2 :\n");
            scanf("%f", &e2.Salary);
        }
        {
            printf("Enter the Name of the Employee.2 :\n");
            scanf("%s", &e2.Name);
        }
    }
    {
        {
            printf("Enter the code of the Employee.3 :\n");
            scanf("%d", &e3.Code);
        }
        {
            printf("Enter the salary of the Employee.3 :\n");
            scanf("%f", &e3.Salary);
        }
        {
            printf("Enter the Name of the Employee.3 :\n");
            scanf("%s", &e3.Name);
        }
    }
    printf("\n");
    {
        printf("The Name of employee.1 is : %s\n", e1.Name);
        printf("The code of te employee.1 is : %d\n", e1.Code);
        printf("The salary of the employee.1 is: %.2f\n", e1.Salary);
    }
    printf("\n");
    {
        printf("The Name of employee.2 is : %s\n", e2.Name);
        printf("The code of te employee.2 is : %d\n", e2.Code);
        printf("The salary of the employee.2 is: %.2f\n", e2.Salary);
    }
    printf("\n");
    {
        printf("The Name of employee.3 is : %s\n", e3.Name);
        printf("The code of te employee.3 is : %d\n", e3.Code);
        printf("The salary of the employee.3 is: %.2f\n", e3.Salary);
    }
    return 0;
}