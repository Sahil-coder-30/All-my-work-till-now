#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the value of a,b,c,d :\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && b > c && c > d)
    {
        printf("The greatest no is :%d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest number is :%d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest number is :%d", c);
    }
    else
        printf("The greatest no is :%d", d);

    return 0;
}
