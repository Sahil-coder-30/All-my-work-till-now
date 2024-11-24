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
    
        struct employee e1,e2,e3;

    {
    
        
        


        printf("Enter the code of the Employee e1 :\n");
        scanf("%d", & e1.Code);

        printf("Enter the salary of the Employee e1 :\n");
        scanf("%f", & e1.Salary);

        printf("Enter the Name of the Employee e1 :\n");
        scanf("%s", & e1.Name);
    }
    {
        

        printf("Enter the code of the Employee e2 :\n");
        scanf("%d", & e2.Code);

        printf("Enter the salary of the Employee e2 :\n");
        scanf("%f", & e2.Salary);

        printf("Enter the Name of the Employee e2 :\n");
        scanf("%s", & e2.Name);
    }
    {


        printf("Enter the code of the Employee e3 :\n");
        scanf("%d", & e3.Code);

        printf("Enter the salary of the Employee e3 :\n");
        scanf("%f", & e3.Salary);

        printf("Enter the Name of the Employee e3 :\n");
        scanf("%s", & e3.Name);
printf("The Name of employee e1 is : %s\n The code of te employee e1 is : %d\n The salary of the employee e1 is: %2.f\n",e1.Name,e1.Code,e1.Salary);
printf("The Name of employee e2 is : %s\n The code of te employee e2 is : %d\n The salary of the employee e2 is: %2.f\n",e2.Name,e2.Code,e2.Salary);
printf("The Name of employee e1 is : %s\n The code of te employee e3 is : %d\n The salary of the employee e3 is: %2.f\n",e3.Name,e3.Code,e3.Salary);

    return 0;
    }
}