#include <stdio.h>
int main()
{
    // Enter the total income so that the tax percentage applied can be calculated;
    int i;

    printf("Enter the income generated in a year :\n");

    scanf("%d", &i); // Take user input;

    float tax;

    if (i > 1000000)
    {
        printf("Tax applied is 30 percent of the total value:\n");
        tax = 0.3 * i;
        printf("The total tax payable is %f\n", tax);
    }
    else if (i > 500000 && i <= 1000000)
    {
        printf("Tax applied is 10 percent of the total value :\n");
        tax = 0.1 * i;
        printf("The total tax payable is %f\n", tax);
    }
    else if (i >= 250000 && i <= 500000)
    {
        printf("Tax applied is 5 percent of the total value \n");
        tax = 0.05 * i;
        printf("The total tax payable is %f\n", tax);
    }

    else
        printf("Total tax payable would be zero:");

    return 0;
}
