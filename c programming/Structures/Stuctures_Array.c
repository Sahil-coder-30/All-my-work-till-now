#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name;
};

int main()
{

    struct employee facebook[] = {0, 1, 2, 3, 4};
    {
        for (int i = 0; i < 4; i++)
        {
            if (i == 0)
            {
                printf("Enter the code of the first employee : \n");
                scanf("%d", &facebook[i].code);

                printf("Enter the salary of the first employee :\n ");
                scanf("%f", &facebook[i].salary);

                printf("Enter the Name of the first employee : \n");
                scanf("%s", &facebook[i].name);
            }
            else if (i == 1)
            {
                printf("Enter the code of the second employee : \n");
                scanf("%d", &facebook[i].code);

                printf("Enter the salary of the second employee : \n");
                scanf("%f", &facebook[i].salary);

                printf("Enter the Name of the second employee : \n");
                scanf("%s", &facebook[i].name);
            }
            else if (i == 2)
            {
                printf("Enter the code of the third employee : \n");
                scanf("%d", &facebook[i].code);

                printf("Enter the salary of the third employee : \n");
                scanf("%f", &facebook[i].salary);

                printf("Enter the Name of the third employee :\n ");
                scanf("%s", &facebook[i].name);
            } 
                else
                {
                printf("Entry completed");
                }
            
        }
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                printf("The Name of the first employee is:%s\n ", facebook[j].name);
                printf("The salary of the first employee is:%f \n", facebook[j].salary);
                printf("The code of the first employee is:%s\n ", facebook[j].code);
            }
            else if (j == 1)
            {
                printf("The Name of the second employee is:%s\n ", facebook[j].name);
                printf("The salary of the second employee is:%f \n", facebook[j].salary);
                printf("The code of the second employee is:%s\n ", facebook[j].code);
            }
            else if (j == 2)
            {
                printf("The Name of the third employee is:%s\n ", facebook[j].name);
                printf("The salary of the third employee is:%f\n ", facebook[j].salary);
                printf("The code of the third employee is:%s\n ", facebook[j].code);
            }
            else
                printf("The above data is checked and verified");
        }
    }
    return 0;
}
