#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number to check:");
    scanf("%d", &a);
    int prime = 0;
    for (int i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            prime = 1;
            break;
        }
    }
        if (prime==1)
        {
            printf("The given number is a non prime number :");
        }
        else
            printf("The given number is a prime number :%d", a);

    return 0;
}