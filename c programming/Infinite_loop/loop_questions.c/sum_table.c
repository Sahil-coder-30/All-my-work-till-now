#include <stdio.h>

int main()
{
    int sum, a;
    printf("Enter the number of the table of which sum you want\n");
    scanf("%d",&a);
    sum = 0;
    for (int i = 1; i < 11; i++)
    {
        sum = sum + i * a;
    }
        printf("The sum of given nubers table is:%d", sum);

    return 0;
}