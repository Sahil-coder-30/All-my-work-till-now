#include <stdio.h>

int main()
{

    int a, r, f, g, h, k, sum;
    k = 0;
    do
    {

        printf("Enter the three digit number of which the reverse is needed : ");
        scanf("%d", &a);

        r = (a % 10); // Gives us the third digit f the Number.
        f = (a / 10);
        g = (f % 10); // Gives ud the second digit of the number.
        h = (f / 10); // Gives us the first digit of the number.
        printf("The reverse of the given number is %d%d%d\n", r, g, h);
        printf("Enter 1 to check another number 0 to off the program : ");
        scanf("%d", &k);
    } while (k == 1);
    return 0;
}