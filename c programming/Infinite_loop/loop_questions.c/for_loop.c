#include <stdio.h>
// The program id designed to get the tables of n numbers in reverse manner;
int main()
{
    int a;
    printf("Enter the no of which tabel you want");
    scanf("%d", &a);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }

    return 0;
}