#include <stdio.h>

int main()
{
    int num, sum, remainder;
    printf("Enter the number : ");
    scanf("%d", &num);
    sum = 0;
    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num /=10;
    }
    printf("The sum of digits of the number : %d", sum);
    return 0;
}