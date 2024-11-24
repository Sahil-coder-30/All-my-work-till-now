#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
} vec;

int main()
{
    vec alpha[2];
    for (int k = 0; k < 2; k++)
    {
        printf("Enter the value of i :\n");
        scanf("%d", &alpha[k].i);
        printf("Enter the value of j :\n");
        scanf("%d", &alpha[k].j);
        printf("The vector v is %di + %dj\n", alpha[k].i, alpha[k].j);
    }
    vec Vnet;
    Vnet.i = alpha[0].i + alpha[1].i;
    Vnet.j = alpha[0].j + alpha[1].j;

    printf("The net vector that is Vnet is: %di+%dj", Vnet.i, Vnet.j);
    return 0;
}