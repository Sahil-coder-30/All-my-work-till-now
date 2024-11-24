#include <stdio.h>

int main()
{
    int a, b;
    char operator;
    printf("Enter the operator");
    scanf("%c", &operator);
    printf("Enter the value of a and b :\n");
    scanf("%d %d", &a, &b);

    switch (operator)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;

    case '/':
        printf("%d", a / b);
        break;

    case '*':
        printf("%d", a + b);
        break;
    }

    return 0;
}